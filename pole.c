/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pole.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhilenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:49:13 by rkhilenk          #+#    #+#             */
/*   Updated: 2017/11/27 17:49:14 by rkhilenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_pole	*create_pole(int size)
{
	t_pole	*pole;
	int		i;
	int		j;

	i = 0;
	pole = (t_pole *)ft_memalloc(sizeof(t_pole));
	pole->size = size;
	pole->array = (char **)ft_memalloc(sizeof(char *) * size + 1);
	while (i < size)
	{
		pole->array[i] = ft_strnew(size);
		j = 0;
		while (j < size)
		{
			pole->array[i][j] = '.';
			j++;
		}
		i++;
	}
	pole->array[i] = NULL;
	return (pole);
}

void	result_print(t_pole *pole)
{
	int i;

	i = 0;
	while (i < pole->size)
	{
		ft_putstr(pole->array[i]);
		ft_putchar('\n');
		i++;
	}
}

void	place_tetr(t_tetr *item, t_pole *pole, int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < item->height)
	{
		j = 0;
		while (j < item->width)
		{
			if (item->pos[i][j] == '#')
				pole->array[i + y][j + x] = item->name;
			j++;
		}
		i++;
	}
}

void	delete_tetr(t_tetr *item, t_pole *pole, int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < item->height)
	{
		j = 0;
		while (j < item->width)
		{
			if (item->pos[i][j] == '#')
				pole->array[i + y][j + x] = '.';
			j++;
		}
		i++;
	}
}

int		try_place(t_tetr *item, t_pole *pole, int x, int y)
{
	int i;
	int j;

	i = 0;
	if (pole->size < x + item->width || pole->size < y + item->height)
		return (0);
	while (i < item->width)
	{
		j = 0;
		while (j < item->height)
		{
			if (item->pos[j][i] == '#' && pole->array[j + y][i + x] != '.')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
