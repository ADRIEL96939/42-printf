/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:07:50 by aoswald           #+#    #+#             */
/*   Updated: 2024/08/19 14:21:37 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr(va_list ap)
{
	int		*index;
	long	nb;
	int		c[11];

	index = (int [2]){0, 0};
	nb = va_arg(ap, int);
	if (nb == 0)
		return (write(1, "0", 1));
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		index[1]++;
	}
	while (nb > 0)
	{
		c[index[0]++] = (nb % 10) + '0';
		nb /= 10;
	}
	index[1] = index[1] + index[0];
	while (--index[0] >= 0)
		write(1, &c[index[0]], 1);
	return (index[1]);
}
