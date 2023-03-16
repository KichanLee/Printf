/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:06:18 by kichan            #+#    #+#             */
/*   Updated: 2023/03/13 11:35:36 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(unsigned long long num)
{
	int		i;
	char	*str;

	i = 1;
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	str = "0123456789abcdef";
	if (num > 15)
		i += ft_ptr(num / 16);
	write(1, &str[num % 16], 1);
	return (i);
}
