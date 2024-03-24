/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:57:40 by rasoares          #+#    #+#             */
/*   Updated: 2024/03/04 16:57:54 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && str[i] <= 'z') 
			|| ('A' <= str[i] && str[i] <= 'Z'))
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
    char str1[] = "HelloWorld";
    char str2[] = "123abc";
    char str3[] = "AbC";

    printf("\"%s\" is %salpha\n", str1, ft_str_is_alpha(str1) ? "" : "not ");
    printf("\"%s\" is %salpha\n", str2, ft_str_is_alpha(str2) ? "" : "not ");
    printf("\"%s\" is %salpha\n", str3, ft_str_is_alpha(str3) ? "" : "not ");

    return 0;
}
*/
