/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr_func.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayti <smayti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:25:30 by smayti            #+#    #+#             */
/*   Updated: 2024/12/04 16:15:01 by smayti           ###   ########.fr       */
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
			if (write(1, "-2147483648", 11) == -1)
				return (-1);
			return (11);
		}
		if (write(1, "-", 1) == -1)
			return (-1);
		n = -n;
		len = 1;
	}
	if (n >= 10)
		len += ft_putnbr(n / 10);
	digit = (n % 10) + '0';
	if (write(1, &digit, 1) == -1)
		return (-1);
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
	if (write(1, &digit, 1) == -1)
		return (-1);
	len++;
	return (len);
}
