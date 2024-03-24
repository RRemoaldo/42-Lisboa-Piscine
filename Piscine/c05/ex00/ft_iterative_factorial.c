/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:45:27 by marvin            #+#    #+#             */
/*   Updated: 2024/03/15 20:45:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int i;
    int resultado;

    i = 1;
    resultado = 1;
    while (i <= nb)
    {
        resultado = resultado * i;
        i++;
    }
    return (resultado);
}