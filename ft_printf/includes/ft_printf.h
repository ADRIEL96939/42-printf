/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:07:16 by aoswald           #+#    #+#             */
/*   Updated: 2024/08/19 14:06:54 by aoswald          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>

# define DECIMAL "0123456789"
# define U_HEXADECIMAL "0123456789ABCDEF"
# define L_HEXADECIMAL "0123456789abcdef"

int		ft_printf(const char *format, ...);
int		ft_putchar(va_list ap);
int		ft_putstr(va_list ap);
int		ft_putnbr(va_list ap);
int		ft_putunbr(va_list ap);
int		ft_putptx(va_list ap);
int		ft_putlhexa(va_list ap);
int		ft_putuhexa(va_list ap);

#endif