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
	int			row;
	int			col;
}				coord;

typedef struct	s_tetr
{
	char			name;
	coord			c1;
	coord			c2;
	coord			c3;
	coord			c4;
	struct s_list	*next;
}				tetr;

char			**check1(int argc, char const *argv[]);
tetr			**check2(char **array);

#endif
