/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:13:11 by rasoares          #+#    #+#             */
/*   Updated: 2024/04/15 15:19:29 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
		return (1);
	return (0);
}
/*#include <stdio.h>
int	main()
{
	char i = 10;
	printf("%d\n", ft_isprint(i));
	return(0);
}*/
/*
Objetivo: Esta função verifica se a variavel i é printable
*/