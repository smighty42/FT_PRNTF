/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayti <smayti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:25:51 by smayti            #+#    #+#             */
/*   Updated: 2024/12/04 18:33:54 by smayti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_put_unsigned_nbr(unsigned int n);
int	ft_put_hexadecimal(unsigned  int n);
int	ft_put_hexadecimal_up(unsigned  int n);
int	ft_put_pointer(unsigned long long ptr);
#endif