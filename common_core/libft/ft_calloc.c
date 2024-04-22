/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:16:00 by rasoares          #+#    #+#             */
/*   Updated: 2024/04/18 12:53:11 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*dest;
	int	n;

	n = nmemb * size;
	dest = malloc(n);
	if (!dest)
		return (NULL);
	ft_bzero(dest, n);
	return (dest);
}
