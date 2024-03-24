/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:08:44 by rasoares          #+#    #+#             */
/*   Updated: 2024/03/02 11:09:39 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char cse, char csd, char t, int x)
{
	int	xst;

	xst = 1;
	write (1, &cse, 1);
	while (xst <= (x - 2))
	{
		write(1, &t, 1);
		xst++;
	}
	if (x >= 2)
	{
		write (1, &csd, 1);
	}
	write (1, "\n", 1);
}

void	ft_putchar2(char p, int x)
{
	int	xst;

	xst = 1;
	write (1, &p, 1);
	while (xst <= (x - 2))
	{
		write(1, " ", 1);
		xst++;
	}
	if (x >= 2)
	{
		write (1, &p, 1);
	}
	write (1, "\n", 1);
}

void	ft_putchar3(char cie, char cid, char t, int x)
{
	int	xst;

	xst = 1;
	write (1, &cie, 1);
	while (xst <= (x - 2))
	{
		write(1, &t, 1);
		xst++;
	}
	if (x >= 2)
	{
		write (1, &cid, 1);
	}
	write (1, "\n", 1);
}

void	danger(void)
{
	char	danger;

	danger = 92;
	write(1, "                         .", 26);
	write(1, "\n", 1);
	write(1, "                        / ", 26);
	write(1, &danger, 1);
	write(1, "\n", 1);
	write(1, "                       / ! ", 27);
	write(1, &danger, 1);
	write(1, "\n", 1);
	write(1, "                      /_____", 28);
	write(1, &danger, 1);
	write(1, "\n", 1);
	write(1, " \n", 2);
	write(1, " \n", 2);
}
