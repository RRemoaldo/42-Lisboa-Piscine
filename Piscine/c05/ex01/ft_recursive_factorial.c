/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 02:57:59 by marvin            #+#    #+#             */
/*   Updated: 2024/03/17 02:58:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 0)
	{
		i *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	return (i);
}
/*
#include <stdio.h>int	main()
{
	printf("%i\n", ft_recursive_factorial(3));
}
*/
