/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:09:23 by kichan            #+#    #+#             */
/*   Updated: 2023/03/13 09:37:13 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexaup(unsigned int num)
{
	int		i;
	char	*str;

	i = 1;
	str = "0123456789ABCDEF";
	if (num > 15)
		i += ft_hexaup(num / 16);
	write(1, &str[num % 16], 1);
	return (i);
}
