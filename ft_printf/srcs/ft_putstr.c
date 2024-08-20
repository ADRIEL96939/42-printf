/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:05:46 by aoswald           #+#    #+#             */
/*   Updated: 2024/08/19 14:17:46 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putstr(va_list ap)
{
	char	*string;
	int		i;

	string = va_arg(ap, char *);
	if (!string)
		return (write(1, "(null)", 6));
	i = 0;
	while (string[i] != '\0')
	{
		write(1, &string[i], 1);
		i++;
	}
	return (i);
}
