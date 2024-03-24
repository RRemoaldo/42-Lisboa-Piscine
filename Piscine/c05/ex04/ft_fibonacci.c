/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:27:26 by marvin            #+#    #+#             */
/*   Updated: 2024/03/18 11:27:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
    {
		return (-1);
    }
	if (index < 2)
    {
		return (index);
    }
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int ft_fibonacci(int index);

int main()
{
	printf("%d", ft_fibonacci(8));
}
*/