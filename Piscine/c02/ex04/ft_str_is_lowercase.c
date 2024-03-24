/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:22:51 by rasoares          #+#    #+#             */
/*   Updated: 2024/03/05 15:22:56 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z') 
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*
int main() {
    char str1[] = "hello";
    char str2[] = "Hello";
    
    printf("String 1: %s - Is lowercase? %s\n", \
    	str1, ft_str_is_lowercase(str1) ? "Yes" : "No");
    printf("String 2: %s - Is lowercase? %s\n", \
    	str2, ft_str_is_lowercase(str2) ? "Yes" : "No");
    
    return 0;
}
*/
