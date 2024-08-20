/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:41:05 by aoswald           #+#    #+#             */
/*   Updated: 2024/08/19 14:25:43 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_type(char format, va_list ap)
{
	if (format == 'c')
		return (ft_putchar(ap));
	if (format == 's')
		return (ft_putstr(ap));
	if (format == 'p')
		return (ft_putptx(ap));
	if ((format == 'd') || (format == 'i'))
		return (ft_putnbr(ap));
	if (format == 'u')
		return (ft_putunbr(ap));
	if (format == 'x')
		return (ft_putlhexa(ap));
	if (format == 'X')
		return (ft_putuhexa(ap));
	if (format == '%')
		return (write(1, "%", 1));
	return (write(1, &format, 1));
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	ap;
	int		total_count;

	i = 0;
	total_count = 0;
	if (!format)
		return (0);
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
			total_count = total_count + print_type(format[++i], ap);
		else
			total_count += write(1, &format[i], 1);
		i++;
	}
	va_end(ap);
	return (total_count);
}
