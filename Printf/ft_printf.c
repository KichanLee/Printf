/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:50:51 by kichan            #+#    #+#             */
/*   Updated: 2023/03/13 11:30:30 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formatting(char ch, va_list ap)
{
	int	count;

	count = 0;
	if (ch == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (ch == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (ch == 'p')
	{
		write(1, "0x", 2);
		count += 2 + ft_ptr(va_arg(ap, unsigned long long));
	}
	else if (ch == 'd' || ch == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (ch == 'u')
		count += ft_putunsigned(va_arg(ap, unsigned int));
	else if (ch == 'x')
		count += ft_hexalow(va_arg(ap, unsigned int));
	else if (ch == 'X')
		count += ft_hexaup(va_arg(ap, unsigned int));
	return (count);
}

int	ft_formattings(char ch)
{
	if (ch == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;
	int		i;
	int		j;

	i = -1;
	count = 0;
	j = 0;
	va_start(ap, str);
	while (str[++i])
	{
		if (str[i] == '%')
		{
			++i;
			count += ft_formatting(str[i], ap);
			count += ft_formattings(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
			++j;
		}
	}
	va_end(ap);
	return (j + count);
}
