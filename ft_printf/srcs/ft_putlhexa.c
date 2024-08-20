/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlhexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:45:16 by aoswald           #+#    #+#             */
/*   Updated: 2024/08/19 14:10:45 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putlhexa(va_list ap)
{
	int				i;
	int				n[16];
	int				count;
	unsigned int	nbr;

	i = 0;
	nbr = va_arg(ap, unsigned int);
	if (nbr == 0)
		return (write(1, "0", 1));
	while (nbr > 0)
	{
		n[i] = nbr % 16;
		nbr /= 16;
		i++;
	}
	count = i;
	while (i > 0)
		write(1, &L_HEXADECIMAL[n[--i]], 1);
	return (count);
}
