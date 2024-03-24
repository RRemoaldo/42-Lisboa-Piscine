/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:24:47 by rasoares          #+#    #+#             */
/*   Updated: 2024/03/05 15:24:49 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z') 
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
int main() 
{
    char str1[] = "HELLO";
    char str2[] = "Hello";
    
    printf("String 1: %s - Is uppercase? %s\n", \
    	str1, ft_str_is_uppercase(str1) ? "Yes" : "No");
    printf("String 2: %s - Is uppercase? %s\n", \
    	str2, ft_str_is_uppercase(str2) ? "Yes" : "No");
    
    return 0;
}
*/
