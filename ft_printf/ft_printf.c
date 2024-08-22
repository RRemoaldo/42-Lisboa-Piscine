/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:11:57 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/21 11:09:53 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_convert(char str, va_list va, long int *len)
{
	if (str == 'c')
		ft_printchar(va_arg(va, int), len);
	if (str == 's')
		ft_printstr(va_arg(va, char *), len);
	if (str == 'p')
		ft_printptr(va_arg(va, unsigned long int), len);
	if (str == 'd' || str == 'i')
		ft_printnum(va_arg(va, int), len);
	if (str == 'u')
		ft_printnum(va_arg(va, unsigned int), len);
	if (str == 'x')
		ft_print_hex(va_arg(va, unsigned int), 0, len);
	if (str == 'X')
		ft_print_hex(va_arg(va, unsigned int), 1, len);
	if (str == '%')
		ft_printchar(str, len);
}

int	ft_printf(const char *str, ...)
{
	long int	len;
	va_list		va;
	unsigned int	i;

	len = 0;
	i = 0;
	if (str == NULL || str[0] == '\0')
		return (-1);
	va_start (va, str);
	while (str[i])
	{
		if (str[i] == '%')
			ft_convert(str[++i], va, &len);
		else
			ft_printchar(str[i], &len);
		i++;
	}
	va_end (va);
	return (len);
}