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

#include "libft.h"
#include "fillit.h"

static int	cr1(int row, int col, tetr *elem)
{
	int i;

	i = 0;
	if ((elem->c2.row == row - 1 && elem->c2.col == col) || (elem->c2.row ==
	row + 1 && elem->c2.col == col) || (elem->c2.row == row && elem->c2.col
	== col - 1) || (elem->c2.row == row && elem->c2.col == col + 1))
		i++;
	if ((elem->c3.row == row - 1 && elem->c3.col == col) || (elem->c3.row ==
	row + 1 && elem->c3.col == col) || (elem->c3.row == row && elem->c3.col
	== col - 1) || (elem->c3.row == row && elem->c3.col == col + 1))
		i++;
	if ((elem->c4.row == row - 1 && elem->c4.col == col) || (elem->c4.row ==
	row + 1 && elem->c4.col == col) || (elem->c4.row == row && elem->c4.col
	== col - 1) || (elem->c4.row == row && elem->c4.col == col + 1))
		i++;
	return (i);
}

static int	cr2(int row, int col, tetr *elem)
{
	int i;

	i = 0;
	if ((elem->c1.row == row - 1 && elem->c1.col == col) || (elem->c1.row ==
	row + 1 && elem->c1.col == col) || (elem->c1.row == row && elem->c1.col
	== col - 1) || (elem->c1.row == row && elem->c1.col == col + 1))
		i++;
	if ((elem->c3.row == row - 1 && elem->c3.col == col) || (elem->c3.row ==
	row + 1 && elem->c3.col == col) || (elem->c3.row == row && elem->c3.col
	== col - 1) || (elem->c3.row == row && elem->c3.col == col + 1))
		i++;
	if ((elem->c4.row == row - 1 && elem->c4.col == col) || (elem->c4.row ==
	row + 1 && elem->c4.col == col) || (elem->c4.row == row && elem->c4.col
	== col - 1) || (elem->c4.row == row && elem->c4.col == col + 1))
		i++;
	return (i);
}

static int	cr3(int row, int col, tetr *elem)
{
	int i;

	i = 0;
	if ((elem->c2.row == row - 1 && elem->c2.col == col) || (elem->c2.row ==
	row + 1 && elem->c2.col == col) || (elem->c2.row == row && elem->c2.col
	== col - 1) || (elem->c2.row == row && elem->c2.col == col + 1))
		i++;
	if ((elem->c1.row == row - 1 && elem->c1.col == col) || (elem->c1.row ==
	row + 1 && elem->c1.col == col) || (elem->c1.row == row && elem->c1.col
	== col - 1) || (elem->c1.row == row && elem->c1.col == col + 1))
		i++;
	if ((elem->c4.row == row - 1 && elem->c4.col == col) || (elem->c4.row ==
	row + 1 && elem->c4.col == col) || (elem->c4.row == row && elem->c4.col
	== col - 1) || (elem->c4.row == row && elem->c4.col == col + 1))
		i++;
	return (i);
}

static int	cr4(int row, int col, tetr *elem)
{
	int i;

	i = 0;
	if ((elem->c2.row == row - 1 && elem->c2.col == col) || (elem->c2.row ==
	row + 1 && elem->c2.col == col) || (elem->c2.row == row && elem->c2.col
	== col - 1) || (elem->c2.row == row && elem->c2.col == col + 1))
		i++;
	if ((elem->c3.row == row - 1 && elem->c3.col == col) || (elem->c3.row ==
	row + 1 && elem->c3.col == col) || (elem->c3.row == row && elem->c3.col
	== col - 1) || (elem->c3.row == row && elem->c3.col == col + 1))
		i++;
	if ((elem->c1.row == row - 1 && elem->c1.col == col) || (elem->c1.row ==
	row + 1 && elem->c1.col == col) || (elem->c1.row == row && elem->c1.col
	== col - 1) || (elem->c1.row == row && elem->c1.col == col + 1))
		i++;
	return (i);
}

int			figurator(tetr *elem)
{
	if ((cr1(elem->c1.row, elem->c1.col, elem) + cr2(elem->c2.row, elem->c2.col,
	elem) + cr3(elem->c3.row, elem->c3.col, elem) + (cr4(elem->c4.row,
	elem->c4.col, elem))) < 6)
		return (0);
	return (1);
}
