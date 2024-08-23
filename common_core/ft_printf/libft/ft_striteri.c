/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <rasoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:18:10 by rasoares          #+#    #+#             */
/*   Updated: 2024/05/07 17:50:02 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*void	print_index_and_character(unsigned int index, char *character)
{
	printf("Índice: %u, Caractere: %c\n", index, *character);
}
int main()
{
	char str[] = "Hello";

	ft_striteri(str, &print_index_and_character);
	return (0);
}*/