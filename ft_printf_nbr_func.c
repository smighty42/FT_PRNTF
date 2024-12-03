/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr_func.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayti <smayti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:25:30 by smayti            #+#    #+#             */
/*   Updated: 2024/12/03 16:45:26 by smayti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putnbr(int n)
{
	int		len;
	char	digit;

	len = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			return(write(1, "-2147483648", 11));
		
		}
		write(1, "-", 1);
		n = -n;
		len = 1;
	}
	if (n >= 10)
		len += ft_putnbr(n / 10);
	digit = (n % 10) + '0';
	 write(1, &digit, 1);
	len++;
	return (len);
}

int	ft_put_unsigned_nbr(unsigned int n)
{
	int		len;
	char	digit;

	len = 0;
	if (n >= 10)
		len += ft_putnbr(n / 10);
	digit = (n % 10) + '0';
	write(1, &digit, 1);
	len++;
	return (len);
}

int	ft_put_pointer(unsigned long long ptr)
{
	int	len;

	if (ptr == 0)
	{
		len = write(1, "(nil)", 5);
		return (len);
	}
	len = write(1, "0x", 2);
	len += ft_put_pointer_hexa(ptr);
	return (len);
}

int	ft_put_pointer_hexa(unsigned long int n)
{
	char	*hexa_case;
	int		len;

	len = 0;
	hexa_case = "0123456789abcdef";
	if (n > 15)
	{
		len += ft_put_pointer_hexa((n / 16));
	}
	len += (ft_putchar(hexa_case[(n % 16)]));
	return (len);
}