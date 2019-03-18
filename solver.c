/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhilenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 16:30:09 by rkhilenk          #+#    #+#             */
/*   Updated: 2017/11/30 16:30:13 by rkhilenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		arrlen(t_tetr **array)
{
	int i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

int		solve_it(t_tetr **array, t_pole *pole, int i, int len)
{
	int x;
	int y;

	y = -1;
	if (i == len)
		return (1);
	while (pole->array[++y])
	{
		x = 0;
		while (pole->array[y][x])
		{
			if (try_place(array[i], pole, x, y))
			{
				place_tetr(array[i], pole, x, y);
				if (solve_it(array, pole, i + 1, len))
					return (1);
				else
					delete_tetr(array[i], pole, x, y);
			}
			x++;
		}
	}
	return (0);
}

t_pole	*solver(t_tetr **array)
{
	t_pole	*pole;
	int		size;

	size = sqroot(arrlen(array) * 4, array);
	pole = create_pole(size);
	while (solve_it(array, pole, 0, arrlen(array)) == 0)
	{
		size++;
		delete_pole(pole);
		pole = create_pole(size);
	}
	result_print(pole);
	return (pole);
}
