/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:14:48 by rasoares          #+#    #+#             */
/*   Updated: 2024/04/18 12:52:16 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char		*p;
	size_t		i;

	i = 0;
	p = (char *)str;
	while (i < n)
	{
		if ((unsigned char)p[i] == (unsigned char)c)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
