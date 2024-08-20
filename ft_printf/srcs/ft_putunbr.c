/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:34:57 by aoswald           #+#    #+#             */
/*   Updated: 2024/08/19 14:21:29 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putunbr(va_list ap)
{
	int				*index;
	unsigned long	nb;
	int				c[11];

	index = (int [2]){0, 0};
	nb = va_arg(ap, unsigned int);
	if (nb == 0)
		return (write(1, "0", 1));
	while (nb > 0)
	{
		c[index[0]++] = (nb % 10) + '0';
		nb /= 10;
	}
	index[1] = index[0];
	while (--index[0] >= 0)
		write(1, &c[index[0]], 1);
	return (index[1]);
}
