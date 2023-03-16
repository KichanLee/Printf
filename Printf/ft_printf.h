/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:11:14 by kichan            #+#    #+#             */
/*   Updated: 2023/03/13 10:25:05 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_putstr(char *str);
int	ft_putchar(int num);
int	ft_ptr(unsigned long long num);
int	ft_putunsigned(unsigned int num);
int	ft_putnbr(int num);
int	ft_hexalow(unsigned int num);
int	ft_hexaup(unsigned int num);
int	ft_printf(const char *str, ...);
int	ft_formatting(char ch, va_list ap);
#endif
