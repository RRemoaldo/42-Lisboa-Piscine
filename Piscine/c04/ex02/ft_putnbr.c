/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:51:36 by rasoares          #+#    #+#             */
/*   Updated: 2024/03/14 16:51:40 by rasoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a)
{
	write (1, &a, 1)
}

void	ft_putnbr(int nb)
{
	if (nb >= -2147483648 && nb <= 2147483648)
	{
		if (nb (nb == -2147483648))
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putchar(147483648);
		}
		else if (nb < 0)
		{
			ft_putchar('-');
			ft_putchar(-nb);
		}
		else if  (nb > 9)
		{
			ft_putchar(nb / 10);
			ft_putchar(nb % 10);
		}
		else
		{
			ft_putchar(nb + '0');
		}
	}
}
