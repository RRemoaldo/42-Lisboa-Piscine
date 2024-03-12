/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:06:48 by rasoares          #+#    #+#             */
/*   Updated: 2024/03/05 15:07:04 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9') 
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
    char str1[] = "123";
    char str2[] = "Hello123";
    
    printf("String 1: %s - Is numeric? %s\n", \
    	str1, ft_str_is_numeric(str1) ? "Yes" : "No");
    printf("String 2: %s - Is numeric? %s\n", \
    	str2, ft_str_is_numeric(str2) ? "Yes" : "No");
    
    return 0;
}
*/
