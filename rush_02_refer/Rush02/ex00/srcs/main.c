/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:19:10 by gicho             #+#    #+#             */
/*   Updated: 2020/02/09 19:35:33 by gicho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		main(int argc, char *argv[])
{
	g_dict_error = 0;
	g_read_error = 0;
	g_is_first = 1;
	rush(argc, argv);
	return (0);
}
