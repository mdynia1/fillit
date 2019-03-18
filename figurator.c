/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   figurator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhilenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 17:52:44 by rkhilenk          #+#    #+#             */
/*   Updated: 2017/11/20 17:52:45 by rkhilenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	cr1(int x, int y, t_tetr *elem)
{
	int i;

	i = 0;
	if ((elem->c2.x == x - 1 && elem->c2.y == y) || (elem->c2.x ==
	x + 1 && elem->c2.y == y) || (elem->c2.x == x && elem->c2.y
	== y - 1) || (elem->c2.x == x && elem->c2.y == y + 1))
		i++;
	if ((elem->c3.x == x - 1 && elem->c3.y == y) || (elem->c3.x ==
	x + 1 && elem->c3.y == y) || (elem->c3.x == x && elem->c3.y
	== y - 1) || (elem->c3.x == x && elem->c3.y == y + 1))
		i++;
	if ((elem->c4.x == x - 1 && elem->c4.y == y) || (elem->c4.x ==
	x + 1 && elem->c4.y == y) || (elem->c4.x == x && elem->c4.y
	== y - 1) || (elem->c4.x == x && elem->c4.y == y + 1))
		i++;
	return (i);
}

static int	cr2(int x, int y, t_tetr *elem)
{
	int i;

	i = 0;
	if ((elem->c1.x == x - 1 && elem->c1.y == y) || (elem->c1.x ==
	x + 1 && elem->c1.y == y) || (elem->c1.x == x && elem->c1.y
	== y - 1) || (elem->c1.x == x && elem->c1.y == y + 1))
		i++;
	if ((elem->c3.x == x - 1 && elem->c3.y == y) || (elem->c3.x ==
	x + 1 && elem->c3.y == y) || (elem->c3.x == x && elem->c3.y
	== y - 1) || (elem->c3.x == x && elem->c3.y == y + 1))
		i++;
	if ((elem->c4.x == x - 1 && elem->c4.y == y) || (elem->c4.x ==
	x + 1 && elem->c4.y == y) || (elem->c4.x == x && elem->c4.y
	== y - 1) || (elem->c4.x == x && elem->c4.y == y + 1))
		i++;
	return (i);
}

static int	cr3(int x, int y, t_tetr *elem)
{
	int i;

	i = 0;
	if ((elem->c2.x == x - 1 && elem->c2.y == y) || (elem->c2.x ==
	x + 1 && elem->c2.y == y) || (elem->c2.x == x && elem->c2.y
	== y - 1) || (elem->c2.x == x && elem->c2.y == y + 1))
		i++;
	if ((elem->c1.x == x - 1 && elem->c1.y == y) || (elem->c1.x ==
	x + 1 && elem->c1.y == y) || (elem->c1.x == x && elem->c1.y
	== y - 1) || (elem->c1.x == x && elem->c1.y == y + 1))
		i++;
	if ((elem->c4.x == x - 1 && elem->c4.y == y) || (elem->c4.x ==
	x + 1 && elem->c4.y == y) || (elem->c4.x == x && elem->c4.y
	== y - 1) || (elem->c4.x == x && elem->c4.y == y + 1))
		i++;
	return (i);
}

static int	cr4(int x, int y, t_tetr *elem)
{
	int i;

	i = 0;
	if ((elem->c2.x == x - 1 && elem->c2.y == y) || (elem->c2.x ==
	x + 1 && elem->c2.y == y) || (elem->c2.x == x && elem->c2.y
	== y - 1) || (elem->c2.x == x && elem->c2.y == y + 1))
		i++;
	if ((elem->c3.x == x - 1 && elem->c3.y == y) || (elem->c3.x ==
	x + 1 && elem->c3.y == y) || (elem->c3.x == x && elem->c3.y
	== y - 1) || (elem->c3.x == x && elem->c3.y == y + 1))
		i++;
	if ((elem->c1.x == x - 1 && elem->c1.y == y) || (elem->c1.x ==
	x + 1 && elem->c1.y == y) || (elem->c1.x == x && elem->c1.y
	== y - 1) || (elem->c1.x == x && elem->c1.y == y + 1))
		i++;
	return (i);
}

int			figurator(t_tetr *elem)
{
	if ((cr1(elem->c1.x, elem->c1.y, elem) + cr2(elem->c2.x, elem->c2.y,
	elem) + cr3(elem->c3.x, elem->c3.y, elem) + (cr4(elem->c4.x,
	elem->c4.y, elem))) < 6)
		return (0);
	return (1);
}
