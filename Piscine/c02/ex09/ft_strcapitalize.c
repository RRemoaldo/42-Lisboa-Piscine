/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:06:41 by rasoares          #+#    #+#             */
/*   Updated: 2024/03/07 11:06:45 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	*ft_strupcase(char *str)
{
	int	i;

	i = 0; 
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	str = ft_strupcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		else if ((((str[i] < 48) || (str[i] > 57 && str[i] < 65)) \
			|| (str[i] > 90 && str[i] < 97) || (str[i] > 122)) \
			&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}

/*
int main() {
    char str[] = "-hello,' World! this Is a test.";
    printf("Original string: %s\n", str);
    printf("After capitalizing: %s\n", ft_strcapitalize(str));
    return 0;
}
*/
