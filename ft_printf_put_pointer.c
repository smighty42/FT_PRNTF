/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_put_pointer.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayti <smayti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:17:23 by smayti            #+#    #+#             */
/*   Updated: 2024/12/04 19:05:55 by smayti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static int	ft_put_pointer_hexa(unsigned long int n)
{
	char	*hexa_case;
	int		len;
    int     tmp;

	len = 0;
	hexa_case = "0123456789abcdef";
	if (n > 15)
	{
		len += ft_put_pointer_hexa((n / 16));
	}
	tmp = (ft_putchar(hexa_case[(n % 16)]));
	if (tmp == -1)
		return (-1);
    len += tmp;
	return (len);
}

int	ft_put_pointer(unsigned long long ptr)
{
	int	len;

	if (ptr == 0)
	{
		len = write(1, "(nil)", 5);
		if (len == -1)
			return (-1);
		return (len);
	}
	len = write(1, "0x", 2);
	if (len == -1)
		return (-1);
	len += ft_put_pointer_hexa(ptr);
	return (len);
}
