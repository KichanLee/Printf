/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichan <kichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:09:23 by kichan            #+#    #+#             */
/*   Updated: 2023/03/12 21:40:50 by kichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexaup(unsigned int num)
{
	int		i;
	char	*str;

	i = 1;
	str = "01234567890ABCDEF";
	if (num > 15)
		i += ft_hexalow(num / 16);
	write(1, &str[num % 16], 1);
	return (i);
}
