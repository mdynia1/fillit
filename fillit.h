/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhilenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:12:13 by rkhilenk          #+#    #+#             */
/*   Updated: 2017/11/17 16:12:14 by rkhilenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FILLIT_H
# define _FILLIT_H

#include <unistd.h>
#include <fcntl.h>

typedef struct	s_coord
{
	int			x;
	int			y;
}				coord;

typedef struct	s_tetr
{
	char	name;
	char	**pos;
	int		width;
	int		height;
	coord	c1;
	coord	c2;
	coord	c3;
	coord	c4;
}				tetr;

typedef struct	s_pole
{
	int			size;
	char		**array;
}				t_pole;

char			**check1(int argc, char const *argv[]);
tetr			**check2(char **array);
int				figurator(tetr *elem);
void			pos(tetr **item);
t_pole			*create_pole(int size);
void			result_print(t_pole *pole);
void			delete_pole(t_pole *pole);
int				try_place(tetr *item, t_pole *pole, int x, int y);
void			place_tetr(tetr *item, t_pole *pole, int x, int y);
void			delete_tetr(tetr *item, t_pole *pole, int x, int y);
int				solve_it(tetr **array, t_pole *pole, int i, int len);
int				arrlen(tetr **array);
int				ft_sqrt(int nb);
t_pole			*solver(tetr **array);
int				sqroot(int nb, tetr **array);

#endif
