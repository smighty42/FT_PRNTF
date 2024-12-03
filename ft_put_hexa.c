/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayti <smayti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:25:56 by smayti            #+#    #+#             */
/*   Updated: 2024/12/03 14:27:15 by smayti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hexadecimal(unsigned long int n)
{
	char	*hexa_case;
	int		len;

	len = 0;
	hexa_case = "0123456789abcdef";
	if (n > 15)
	{
		len += ft_put_hexadecimal((n / 16));
	}
	len += (ft_putchar(hexa_case[(n % 16)]));
	return (len);
}

int	ft_put_hexadecimal_up(unsigned long int n)
{
	char	*hexa_case_up;
	int		len;

	len = 0;
	hexa_case_up = "0123456789ABCDEF";
	if (n > 15)
	{
		len += ft_put_hexadecimal_up((n / 16));
	}
	len += (ft_putchar(hexa_case_up[(n % 16)]));
	return (len);
}