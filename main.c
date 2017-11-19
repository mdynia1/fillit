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
#include "libft.h"

int	main(int argc, char const *argv[])
{
	tetr	**massiv;

	if ((massiv = (check2(check1(argc, argv)))) == NULL)
	{
		ft_putstr("error");
		return (0);
	}
	return (1);
}

