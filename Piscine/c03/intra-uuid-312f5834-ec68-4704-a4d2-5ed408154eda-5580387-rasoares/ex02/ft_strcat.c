/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:29:09 by rasoares          #+#    #+#             */
/*   Updated: 2024/03/12 12:29:14 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int main(void)
{
	char s1[] = "pirate gdvghdgfjdhg";
	char *s_ptr;
	char s2[10] = "jshf";
	char *s_ptr2;
	
	s_ptr = s1;
	s_ptr2 = s2;
	
	printf("%s", ft_strcat(s_ptr, s_ptr2));
}
*/
