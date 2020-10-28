/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae-kim <jae-kim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:57:53 by jae-kim           #+#    #+#             */
/*   Updated: 2020/10/22 21:23:52 by jae-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	fm;

	i = 0;
	fm = str[i - 1];
	while (str[i] != '\0')
	{
		if (i == 0)
			if ((str[i] >= 97 && str[i] <= 122))
				str[i] = str[i] - 32;
		if ((str[i] >= 97 && str[i] <= 122))
		{
			if (!((fm >= 97 && fm <= 122) || (fm >= 65 && fm <= 90)))
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			if (((fm >= 97 && fm <= 122) || (fm >= 65 && fm <= 90)))
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
