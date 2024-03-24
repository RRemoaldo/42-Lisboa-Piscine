/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:43:44 by marvin            #+#    #+#             */
/*   Updated: 2024/03/18 10:43:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int result;

    result = 1;
    if(power < 0)
    {
        return(0);
    }
    else if(power == 0)
    {
        return(1);
    }
    while (power > 0)
    {
        result = nb * nb;
        power--;
    }
}