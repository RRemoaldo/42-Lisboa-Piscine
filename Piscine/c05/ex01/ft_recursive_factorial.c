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

//#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
    {
        return (0);
    }
    if (nb < 2)
    {
        return (1);
    }
    else
    {
            return (ft_recursive_factorial (nb * (nb - 1)));
    }
}
/*
int main(void)
{
    printf("%i", ft_recursive_factorial(3));
}
*/