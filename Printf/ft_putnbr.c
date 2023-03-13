/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:07:35 by kichan            #+#    #+#             */
/*   Updated: 2023/03/12 21:40:37 by kichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	char	ch;
	int		i;

	i = 1;
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
		++i;
	}
	if (num > 9)
	{
		i += ft_putnbr(num / 10);
		++i;
		ch = '0' + num % 10;
	}
	else
		ch = '0' + num;
	write(1, &ch, 1);
	return (i);
}
