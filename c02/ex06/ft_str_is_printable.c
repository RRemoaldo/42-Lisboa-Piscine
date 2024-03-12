/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:25:58 by rasoares          #+#    #+#             */
/*   Updated: 2024/03/05 15:26:02 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127) 
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
    char str1[] = "Hello, World!";
    char str2[] = "Hello\nWorld";
    
    printf("String 1: %s - Is printable? %s\n", \
    	str1, ft_str_is_printable(str1) ? "Yes" : "No");
    printf("String 2: %s - Is printable? %s\n", \
    	str2, ft_str_is_printable(str2) ? "Yes" : "No");
    
    return 0;
}
*/
