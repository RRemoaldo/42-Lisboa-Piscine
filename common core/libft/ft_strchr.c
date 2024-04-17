/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:14:01 by rasoares          #+#    #+#             */
/*   Updated: 2024/04/17 17:25:40 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int	i;
	int	l;

	i = 0;
	l = ft_strlen(str);
	while (i < l)
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == '\0' && c == '\0')
		return ((char *)str + i);
	return (0);
}