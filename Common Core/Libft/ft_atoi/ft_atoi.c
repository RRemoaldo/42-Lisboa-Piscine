/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 08:45:21 by marvin            #+#    #+#             */
/*   Updated: 2024/03/24 08:45:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

static void ft_putchar(char c)
{
    write(1, &c, 1);
}

char ft_atoi(char *nb)
{
    int i;

    i = 0;
    while ((nb[i] <= 13 && nb[i] >= 9) || nb[i] == 32)
    {
        i++;
    }
    if (nb[i] == '-')
    {
        ft_putchar('-');
        i++;
    }
    while (nb[i] == '+')
    {
        i++;
    }
    while(nb[i] != '\0')
    {
        ft_putchar(nb[i]);
        i++;
    }
}
/*
int main()
{
    ft_atoi("    -+++++42");
}
*/