/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:08:12 by aoswald           #+#    #+#             */
/*   Updated: 2024/08/19 14:17:22 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putptx(va_list ap)
{
	int			i;
	int			n[16];
	int			count;
	uintptr_t	nbr;

	i = 0;
	nbr = (uintptr_t)va_arg(ap, void *);
	if (nbr == 0)
		return (write(1, "0x0", 3));
	write(1, "0x", 2);
	while (nbr > 0)
	{
		n[i] = nbr % 16;
		nbr /= 16;
		i++;
	}
	count = i + 2;
	while (i > 0)
		write(1, &L_HEXADECIMAL[n[--i]], 1);
	return (count);
}
