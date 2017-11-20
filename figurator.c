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
	if ((elem->c2.row == row - 1 && elem->c2.col == col) || (elem->c2.row ==
	row + 1 && elem->c2.col == col) || (elem->c2.row == row && elem->c2.col
	== col - 1) || (elem->c2.row == row && elem->c2.col == col + 1))
		return (1);
	if ((elem->c3.row == row - 1 && elem->c3.col == col) || (elem->c3.row ==
	row + 1 && elem->c3.col == col) || (elem->c3.row == row && elem->c3.col
	== col - 1) || (elem->c3.row == row && elem->c3.col == col + 1))
		return (1);
	if ((elem->c4.row == row - 1 && elem->c4.col == col) || (elem->c4.row ==
	row + 1 && elem->c4.col == col) || (elem->c4.row == row && elem->c4.col
	== col - 1) || (elem->c4.row == row && elem->c4.col == col + 1))
		return (1);
	return (0);
}

static int	cr2(int row, int col, tetr *elem)
{
	if ((elem->c1.row == row - 1 && elem->c1.col == col) || (elem->c1.row ==
	row + 1 && elem->c1.col == col) || (elem->c1.row == row && elem->c1.col
	== col - 1) || (elem->c1.row == row && elem->c1.col == col + 1))
		return (1);
	if ((elem->c3.row == row - 1 && elem->c3.col == col) || (elem->c3.row ==
	row + 1 && elem->c3.col == col) || (elem->c3.row == row && elem->c3.col
	== col - 1) || (elem->c3.row == row && elem->c3.col == col + 1))
		return (1);
	if ((elem->c4.row == row - 1 && elem->c4.col == col) || (elem->c4.row ==
	row + 1 && elem->c4.col == col) || (elem->c4.row == row && elem->c4.col
	== col - 1) || (elem->c4.row == row && elem->c4.col == col + 1))
		return (1);
	return (0);
}

static int	cr3(int row, int col, tetr *elem)
{
	if ((elem->c2.row == row - 1 && elem->c2.col == col) || (elem->c2.row ==
	row + 1 && elem->c2.col == col) || (elem->c2.row == row && elem->c2.col
	== col - 1) || (elem->c2.row == row && elem->c2.col == col + 1))
		return (1);
	if ((elem->c1.row == row - 1 && elem->c1.col == col) || (elem->c1.row ==
	row + 1 && elem->c1.col == col) || (elem->c1.row == row && elem->c1.col
	== col - 1) || (elem->c1.row == row && elem->c1.col == col + 1))
		return (1);
	if ((elem->c4.row == row - 1 && elem->c4.col == col) || (elem->c4.row ==
	row + 1 && elem->c4.col == col) || (elem->c4.row == row && elem->c4.col
	== col - 1) || (elem->c4.row == row && elem->c4.col == col + 1))
		return (1);
	return (0);
}

static int	cr4(int row, int col, tetr *elem)
{
	if ((elem->c2.row == row - 1 && elem->c2.col == col) || (elem->c2.row ==
	row + 1 && elem->c2.col == col) || (elem->c2.row == row && elem->c2.col
	== col - 1) || (elem->c2.row == row && elem->c2.col == col + 1))
		return (1);
	if ((elem->c3.row == row - 1 && elem->c3.col == col) || (elem->c3.row ==
	row + 1 && elem->c3.col == col) || (elem->c3.row == row && elem->c3.col
	== col - 1) || (elem->c3.row == row && elem->c3.col == col + 1))
		return (1);
	if ((elem->c1.row == row - 1 && elem->c1.col == col) || (elem->c1.row ==
	row + 1 && elem->c1.col == col) || (elem->c1.row == row && elem->c1.col
	== col - 1) || (elem->c1.row == row && elem->c1.col == col + 1))
		return (1);
	return (0);
}

int			figurator(tetr *elem)
{
	if (cr1(elem->c1.row, elem->c1.col, elem) == 0)
		return (0);
	if (cr1(elem->c2.row, elem->c2.col, elem) == 0)
		return (0);
	if (cr1(elem->c3.row, elem->c3.col, elem) == 0)
		return (0);
	if (cr1(elem->c4.row, elem->c4.col, elem) == 0)
		return (0);
	return (1);
}
