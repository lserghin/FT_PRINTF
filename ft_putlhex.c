/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lserghin <lserghin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:22:28 by lserghin          #+#    #+#             */
/*   Updated: 2024/12/01 15:36:47 by lserghin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlhex(unsigned int nbr)
{
	char			*base;
	int				str[20];
	int				index;
	int				count;

	base = "0123456789abcdef";
	if (nbr == 0)
		return (write(1, "0", 1), 1);
	index = 0;
	while (nbr)
	{
		*(str + index++) = nbr % 16;
		nbr /= 16;
	}
	count = index;
	while (index)
		write(1, base + (*(str + --index)), 1);
	return (count);
}
