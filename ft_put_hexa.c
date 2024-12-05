/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayti <smayti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:25:56 by smayti            #+#    #+#             */
/*   Updated: 2024/12/04 19:03:49 by smayti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hexadecimal(unsigned int n)
{
	char	*hexa_case;
	int		len;
	int tmp;
	
	len = 0;
	hexa_case = "0123456789abcdef";
	if (n > 15)
	{
		tmp = ft_put_hexadecimal((n / 16));
		if(tmp == -1)
			return(-1);
		len +=tmp;
	}
	tmp = (ft_putchar(hexa_case[(n % 16)]));
	if (tmp == -1)
		return (-1);
	len += tmp;
	return (len);
}

int	ft_put_hexadecimal_up(unsigned int n)
{
	char	*hexa_case_up;
	int		len;
	int tmp;
	len = 0;
	hexa_case_up = "0123456789ABCDEF";
	if (n > 15)
	{
		tmp = ft_put_hexadecimal_up((n / 16));
		if(tmp == -1)
			return(-1);
		len += tmp;
	}
	tmp = (ft_putchar(hexa_case_up[(n % 16)]));
	if (tmp == -1)
		return (-1);
	len += tmp;
	return (len);
}
