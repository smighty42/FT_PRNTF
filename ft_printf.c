/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayti <smayti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:25:45 by smayti            #+#    #+#             */
/*   Updated: 2024/12/03 14:27:18 by smayti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_printf_arg(va_list args, const char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_put_unsigned_nbr(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_put_hexadecimal(va_arg(args, unsigned int)));
	else if (format == 'X')
		return (ft_put_hexadecimal_up(va_arg(args, unsigned int)));
	else if (format == '%')
		return (ft_putchar('%'));
    else if (format == 'p')
		return (ft_put_pointer(va_arg(args, unsigned long long)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		length;

	if (!format)
		return (-1);
	i = 0;
	length = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			length += ft_printf_arg(args, format[i + 1]);
			i++;
		}
		else
			length += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (length);
}
