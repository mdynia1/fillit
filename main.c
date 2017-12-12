/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhilenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:51:01 by rkhilenk          #+#    #+#             */
/*   Updated: 2017/11/17 15:51:03 by rkhilenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char const *argv[])
{
	tetr	**massiv;

	if (argc != 2)
	{
		ft_putstr("usage: ./fillit input_file\n");
		return (0);
	}
	else if ((massiv = (check2(check1(argv)))) == NULL)
	{
		ft_putstr("error\n");
		return (0);
	}
	solver(massiv);
	return (1);
}

