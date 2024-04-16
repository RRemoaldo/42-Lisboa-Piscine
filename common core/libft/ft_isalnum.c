/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:41:20 by rasoares          #+#    #+#             */
/*   Updated: 2024/04/15 14:31:37 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int i)
{
	if (((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
		|| (i >= '0' && i <= '9'))
		return (1);
	return (0);
}
/*#include <stdio.h>
int	main()
{
	char i = '1';
	printf("%d\n", ft_isalnum(i));
	return(0);
}*/
/*
Objetivo: Esta função verifica se a variavel i é alpha ou numerica
*/