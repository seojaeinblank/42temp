/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae-kim <jae-kim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 18:50:12 by jae-kim           #+#    #+#             */
/*   Updated: 2020/10/22 18:50:22 by jae-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((96 < str[i] && str[i] < 123) || (64 < str[i] && str[i] < 91))
            i++;
        else
            return (0);
    }
    return (1);
}
