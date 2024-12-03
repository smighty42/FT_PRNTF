/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayti <smayti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:25:51 by smayti            #+#    #+#             */
/*   Updated: 2024/12/03 14:27:16 by smayti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_strlen(char *str);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_put_unsigned_nbr(unsigned int n);
int	ft_put_hexadecimal(unsigned long int n);
int	ft_put_hexadecimal_up(unsigned long int n);
int	ft_put_pointer(unsigned long long ptr);
int	ft_put_pointer_hexa(unsigned long int n);
#endif