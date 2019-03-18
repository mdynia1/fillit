/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhilenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:12:13 by rkhilenk          #+#    #+#             */
/*   Updated: 2017/12/12 16:51:36 by mdynia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FILLIT_H
# define _FILLIT_H
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"

typedef struct	s_coord
{
	int			x;
	int			y;
}				t_coord;

typedef struct	s_tetr
{
	char			name;
	char			**pos;
	int				width;
	int				height;
	t_coord			c1;
	t_coord			c2;
	t_coord			c3;
	t_coord			c4;
}				t_tetr;

typedef struct	s_pole
{
	int			size;
	char		**array;
}				t_pole;

char			**check1(char const *argv[]);
t_tetr			**check2(char **array);
int				figurator(t_tetr *elem);
void			pos(t_tetr **item);
t_pole			*create_pole(int size);
void			result_print(t_pole *pole);
void			delete_pole(t_pole *pole);
int				try_place(t_tetr *item, t_pole *pole, int x, int y);
void			place_tetr(t_tetr *item, t_pole *pole, int x, int y);
void			delete_tetr(t_tetr *item, t_pole *pole, int x, int y);
int				solve_it(t_tetr **array, t_pole *pole, int i, int len);
int				arrlen(t_tetr **array);
t_pole			*solver(t_tetr **array);
int				sqroot(int nb, t_tetr **array);

#endif
