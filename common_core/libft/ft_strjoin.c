/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:17:06 by rasoares          #+#    #+#             */
/*   Updated: 2024/04/18 13:30:08 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*new;
	size_t		i;
	int			x;

	i = -1;
	x = 0;
	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	while (++i < ft_strlen(s1))
	{
		new[x] = s1[i];
		x++;
	}
	i = -1;
	while (++i < ft_strlen(s2))
	{
		new[x] = s2[i];
		x++;
	}
	new[x] = '\0';
	return (new);
}
