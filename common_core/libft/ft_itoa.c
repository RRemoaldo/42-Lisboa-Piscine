/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:17:45 by rasoares          #+#    #+#             */
/*   Updated: 2024/04/22 21:58:01 by rasoares         ###   ########.fr       */
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
	char *result;
	int len;

	len = 0;
	len = ft_len(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		result[0] = '-';
	}
	if (n == 0)
	{
		result[0] = '0';
	}
	result[len] = '\0';
	while (n > 0)
	{
		len--;
		result[len] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>

// Function prototypes
static int	ft_len(int n);
char		*ft_itoa(int n);

int main() {
    // Test cases
    int num1 = 1234;
    int num2 = -5678;
    int num3 = 0;

    // Test ft_itoa function
    char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);
    char *str3 = ft_itoa(num3);

    // Print results
    printf("Integer: %d, String: %s\n", num1, str1);
    printf("Integer: %d, String: %s\n", num2, str2);
    printf("Integer: %d, String: %s\n", num3, str3);

    // Free memory
    free(str1);
    free(str2);
    free(str3);

    return 0;
}
*/