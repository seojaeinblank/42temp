/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae-kim <jae-kim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 18:31:35 by jae-kim           #+#    #+#             */
/*   Updated: 2020/10/22 20:39:38 by jae-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src_len < n)
	{
		while (i + 1 < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
