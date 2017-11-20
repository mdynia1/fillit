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

#include "libft.h"
#include "fillit.h"

// dell
#include <stdio.h>
// dell
tetr	*new_obj(char name)
{
	tetr	*object;

	if ((object = (tetr *)malloc(sizeof(*object))) == NULL)
		return (NULL);
	object->name = name;
	object->c1.row = 0;
	object->c1.col = 0;
	object->c2.row = 0;
	object->c2.col = 0;
	object->c3.row = 0;
	object->c3.col = 0;
	object->c4.row = 0;
	object->c4.col = 0;
	return (object);
}

void	coordinator(int i, tetr **item)
{
	if (((*item)->c1.row) == 0 && ((*item)->c1.col) == 0)
	{
		(*item)->c1.row = i/5 + 1;
		(*item)->c1.col = i%5 + 1;
	}
	else if (((*item)->c2.row) == 0 && ((*item)->c2.col) == 0)
	{
		(*item)->c2.row = i/5 + 1;
		(*item)->c2.col = i%5 + 1;
	}
	else if (((*item)->c3.row) == 0 && ((*item)->c3.col) == 0)
	{
		(*item)->c3.row = i/5 + 1;
		(*item)->c3.col = i%5 + 1;
	}
	else if (((*item)->c4.row) == 0 && ((*item)->c4.col) == 0)
	{
		(*item)->c4.row = i/5 + 1;
		(*item)->c4.col = i%5 + 1;
	}
}

tetr	**check2(char **array)
{
	int		i;
	int		j;
	char	name;
	tetr	**massiv;

	if (array == NULL)
		return NULL;
	name = 64;
	massiv = (tetr **)malloc(sizeof(*massiv) * 27);
	i = 0;
	while (array[i])
	{
		j = 0;
		massiv[i] = new_obj(++name);
		while (array[i][j] != '\0')
		{
			if (array[i][j] == '#')
				coordinator(j, &massiv[i]);
			j++;
		}
		if (figurator(massiv[i]) == 0)
			return NULL;
		i++;
	}
	return(massiv);
}
