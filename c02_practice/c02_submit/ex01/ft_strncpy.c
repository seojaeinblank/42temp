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

int     ft_getlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    unsigned int src_len;

    i = 0;
    src_len = ft_getlen(src);
    while (i < n)
    {
        if (src_len >= n)
        {
            dest[i] = src[i];
        }
        else
        {
            if (i < src_len)
            {
                dest[i] = src[i];
            }
            else
                dest[i] = '\0';
        }
        i++;
    }
    return (dest);
}
