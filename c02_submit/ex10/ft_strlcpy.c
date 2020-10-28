/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae-kim <jae-kim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 13:32:50 by jae-kim           #+#    #+#             */
/*   Updated: 2020/10/25 11:49:04 by jae-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;

	i = 0;
	src[size - 1] = '\0';
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (i);
}
