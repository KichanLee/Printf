/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:50:51 by kichan            #+#    #+#             */
/*   Updated: 2023/03/12 21:40:47 by kichan           ###   ########.fr       */
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
		ft_ptr(va_arg(ap, unsigned long long));
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

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;
	int		i;
	int		j;

	i = 0;
	count = 0;
	j = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			++i;
			count += ft_formatting(str[i], ap);
		}
		else
		{
			write(1, &str[i], 1);
			++j;
		}
		++i;
	}
	va_end(ap);
	return (j + count);
}
