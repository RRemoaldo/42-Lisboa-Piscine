/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:29:43 by rasoares          #+#    #+#             */
/*   Updated: 2024/03/05 15:29:45 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0; 
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int main() {
    char str[] = "hello, world!";
    
    printf("Original string: %s\n", str);
    
    // Chama a função ft_strupcase para converter a string para maiúsculas
    ft_strupcase(str);
    
    printf("String after conversion to uppercase: %s\n", str);
    
    return 0;
}
*/
