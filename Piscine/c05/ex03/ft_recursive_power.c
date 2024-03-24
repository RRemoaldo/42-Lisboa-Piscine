/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:53:30 by marvin            #+#    #+#             */
/*   Updated: 2024/03/18 10:53:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
    int result;

    result = 1;
    if(power < 0)
    {
        return(0);
    }
    else if(power == 0 || power < 1 || nb == 1)
    {
        return(1);
    }
    while (power > 0)
    {
        return(nb * ft_recursive_power (nb, (power - 1)));
    }
}
/*
#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main()
{
	printf("%i", ft_recursive_power(3,2));
}
*/