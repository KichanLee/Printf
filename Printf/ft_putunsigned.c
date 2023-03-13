/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:07:03 by kichan            #+#    #+#             */
/*   Updated: 2023/03/12 21:41:35 by kichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int num)
{
	int		i;
	char	ch;

	i = 1;
	ch = '0';
	if (num > 9)
		i += ft_putunsigned(num / 10);
	ch += num % 10;
	write(1, &ch, 1);
	return (i);
}
