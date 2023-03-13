/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:06:18 by kichan            #+#    #+#             */
/*   Updated: 2023/03/12 21:40:42 by kichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(unsigned long num)
{
	int		i;
	char	*str;

	i = 1;
	str = "0123456789abcdef";
	if (num > 15)
		i += ft_hexalow(num / 16);
	write(1, &str[num % 16], 1);
	return (i);
}
