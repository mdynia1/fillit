/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhilenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 15:57:29 by rkhilenk          #+#    #+#             */
/*   Updated: 2017/11/19 15:57:30 by rkhilenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetr	*new_obj(char name)
{
	t_tetr	*object;

	if ((object = (t_tetr *)malloc(sizeof(*object))) == NULL)
		return (NULL);
	object->name = name;
	object->c1.x = 0;
	object->c1.y = 0;
	object->c2.x = 0;
	object->c2.y = 0;
	object->c3.x = 0;
	object->c3.y = 0;
	object->c4.x = 0;
	object->c4.y = 0;
	object->width = 0;
	object->height = 0;
	return (object);
}

void	w_h(t_tetr **item)
{
	if ((*item)->c1.x > (*item)->width)
		(*item)->width = (*item)->c1.x;
	if ((*item)->c2.x > (*item)->width)
		(*item)->width = (*item)->c2.x;
	if ((*item)->c3.x > (*item)->width)
		(*item)->width = (*item)->c3.x;
	if ((*item)->c4.x > (*item)->width)
		(*item)->width = (*item)->c4.x;
	if ((*item)->c1.y > (*item)->height)
		(*item)->height = (*item)->c1.y;
	if ((*item)->c2.y > (*item)->height)
		(*item)->height = (*item)->c2.y;
	if ((*item)->c3.y > (*item)->height)
		(*item)->height = (*item)->c3.y;
	if ((*item)->c4.y > (*item)->height)
		(*item)->height = (*item)->c4.y;
}

void	minimizator(t_tetr **item)
{
	while ((*item)->c1.x > 1 && (*item)->c2.x > 1 &&
		(*item)->c3.x > 1 && (*item)->c4.x > 1)
	{
		(*item)->c1.x -= 1;
		(*item)->c2.x -= 1;
		(*item)->c3.x -= 1;
		(*item)->c4.x -= 1;
	}
	while ((*item)->c1.y > 1 && (*item)->c2.y > 1 &&
		(*item)->c3.y > 1 && (*item)->c4.y > 1)
	{
		(*item)->c1.y -= 1;
		(*item)->c2.y -= 1;
		(*item)->c3.y -= 1;
		(*item)->c4.y -= 1;
	}
	w_h(&(*item));
	pos(&(*item));
}

void	coordinator(int i, t_tetr **item)
{
	if (((*item)->c1.x) == 0 && ((*item)->c1.y) == 0)
	{
		(*item)->c1.y = i / 5 + 1;
		(*item)->c1.x = i % 5 + 1;
	}
	else if (((*item)->c2.x) == 0 && ((*item)->c2.y) == 0)
	{
		(*item)->c2.y = i / 5 + 1;
		(*item)->c2.x = i % 5 + 1;
	}
	else if (((*item)->c3.x) == 0 && ((*item)->c3.y) == 0)
	{
		(*item)->c3.y = i / 5 + 1;
		(*item)->c3.x = i % 5 + 1;
	}
	else if (((*item)->c4.x) == 0 && ((*item)->c4.y) == 0)
	{
		(*item)->c4.y = i / 5 + 1;
		(*item)->c4.x = i % 5 + 1;
	}
}

t_tetr	**check2(char **array)
{
	int		i;
	int		j;
	char	name;
	t_tetr	**massiv;

	if (array == NULL)
		return (NULL);
	name = 64;
	massiv = (t_tetr **)malloc(sizeof(*massiv) * 27);
	i = -1;
	while (array[++i])
	{
		j = 0;
		massiv[i] = new_obj(++name);
		while (array[i][j] != '\0')
		{
			if (array[i][j] == '#')
				coordinator(j, &massiv[i]);
			j++;
		}
		minimizator(&massiv[i]);
		if (figurator(massiv[i]) == 0)
			return (NULL);
	}
	return (massiv);
}
