/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:04:03 by rasoares          #+#    #+#             */
/*   Updated: 2024/03/14 17:04:04 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * sign);
}
/*#include <stdio.h>

int ft_atoi(char *str);

int main() {
    char input1[] = "  12345";
    char input2[] = "  --6789";
    char input3[] = "  +42";

    printf("String: \"%s\"\tResult: %d\n", input1, ft_atoi(input1));
    printf("String: \"%s\"\tResult: %d\n", input2, ft_atoi(input2));
    printf("String: \"%s\"\tResult: %d\n", input3, ft_atoi(input3));

    return 0;
}
*/
