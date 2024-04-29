/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:17:45 by rasoares          #+#    #+#             */
/*   Updated: 2024/04/29 11:34:05 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	if (n == 0)
		len = 1;
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*result;
	int			len;
	long int	negnum;

	negnum = n;
	len = ft_len(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	else if (negnum < 0)
	{
		negnum *= -1;
		result[0] = '-';
	}
	else if (negnum == 0)
		result[0] = '0';
	result[len] = '\0';
	while (negnum > 0)
	{
		len--;
		result[len] = (negnum % 10) + '0';
		negnum /= 10;
	}
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>

// Function prototypes
static int	ft_len(long int n);
char		*ft_itoa(int n);

int main() {
    // Test cases
    int num1 = 10;
    int num2 = -2147483648;
    int num3 = 0;

    // Test ft_itoa function
    char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);
    char *str3 = ft_itoa(num3);

    // Print results
    printf("Integer: %d, String: %s\n", num1, str1);
    printf("Integer: %d, String: %s\n", num2, str2);
    printf("Integer: %d, String: %s\n", num3, str3);


    return 0;
}
*/
