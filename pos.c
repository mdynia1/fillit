/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhilenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 17:17:45 by rkhilenk          #+#    #+#             */
/*   Updated: 2017/11/26 17:17:47 by rkhilenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

/* записываем уменшеную тетрисоиду в строковый формат (2й масив) */
void	pos(tetr **item)
{
	int		i;
	char	*str;
	int		j;
	i = 0;
	(*item)->pos = ft_memalloc(sizeof(char *) * (*item)->height);
	while (i < (*item)->height)
	{
		j = 0;
		str = ft_strnew((*item)->width);
		while (j < (*item)->width)
		{
			if (((*item)->c1.x == j+1 && (*item)->c1.y == i+1) ||
			((*item)->c2.x == j+1 && (*item)->c2.y == i+1) ||
			((*item)->c3.x == j+1 && (*item)->c3.y == i+1) ||
			((*item)->c4.x == j+1 && (*item)->c4.y == i+1))
				str[j] = '#';
			else
				str[j] = '.';
			j++;
		}
		printf("%s\n", str);
		(*item)->pos[i] = str;
		i++;
	}
}
