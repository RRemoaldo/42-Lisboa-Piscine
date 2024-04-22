/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:17:37 by rasoares          #+#    #+#             */
/*   Updated: 2024/04/22 21:05:09 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	wc;
	int	i;

	wc = 0;
	i = 0;

	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c)
			wc++;
		while (s[i] != c && s[i])
			i++;
	}
	return wc;
}

char	*subword(char const *s, int start, int len)
{
	char	*sub;
	int		i;

	i = 0;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (start < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		start;
	int		j;

	split = malloc(sizeof(char *) * word_count(s, c));
	if (!split || !s)
		return (NULL);
	start = -1;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && start < 0)
		{
			start = i;
		}
		else if (s[i] == c && start >= 0)
		{
			split[j] = subword(s, start, i);
			j++;
			start = -1;
		}
		i++;
	}
	split[j] = NULL;

	return (split);
}
