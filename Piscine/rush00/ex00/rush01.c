/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:33:16 by rasoares          #+#    #+#             */
/*   Updated: 2024/03/02 10:33:23 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char cse, char csd, char t, int x);
void	ft_putchar2(char p, int x);
void	ft_putchar3(char cie, char cid, char t, int x);
void	danger(void);

void	rush(int x, int y)
{
	int	yst;

	yst = 1;
	while (yst <= y && x > 0)
	{
		if (yst == 1)
		{
			ft_putchar(47, 92, 42, x); 
		}
		else if (yst == y)
		{
			ft_putchar3(92, 47, 42, x);
		}
		else
		{
			ft_putchar2(42, x);
		}
		yst++;
	}
	if (x <= 0 || y <= 0)
	{
		danger();
		write (1, "The values have to be a whole positive number!!  ", 49);
	}
}
