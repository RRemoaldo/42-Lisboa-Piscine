/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:55:55 by rasoares          #+#    #+#             */
/*   Updated: 2024/04/15 14:24:47 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int i)
{
	if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main()
{
	char i = '1';
	printf("%d\n", ft_isalpha(i));
	return(0);
}
*/
/*
Objetivo: Esta função verifica se a variavel i é alpha
*/