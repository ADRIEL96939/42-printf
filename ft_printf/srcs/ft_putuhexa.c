/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuhexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:04:43 by aoswald           #+#    #+#             */
/*   Updated: 2024/08/19 14:18:11 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putuhexa(va_list ap)
{
	int				i;
	int				n[16];
	int				count;
	unsigned int	nbr;

	i = 0;
	nbr = va_arg(ap, unsigned int);
	if (nbr == 0)
		return (write(1, "0", 1));
	while (nbr != 0)
	{
		n[i] = nbr % 16;
		nbr /= 16;
		i++;
	}
	count = i;
	while (i > 0)
		write(1, &U_HEXADECIMAL[n[--i]], 1);
	return (count);
}
