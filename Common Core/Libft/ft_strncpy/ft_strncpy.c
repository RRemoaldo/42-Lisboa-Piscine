/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:49:11 by marvin            #+#    #+#             */
/*   Updated: 2024/03/24 15:49:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
    return (dest);
}