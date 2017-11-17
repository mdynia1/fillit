/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhilenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:45:56 by rkhilenk          #+#    #+#             */
/*   Updated: 2017/11/17 15:45:58 by rkhilenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

static int cheker(char **array)
{
	int		dot;
	int		bar;
	int		i;
	int		j;

	j = 0;
	while (array[j] != NULL)
	{
		i = 0;
		dot = 0;
		bar = 0;
		while(array[j][i] != '\0')
		{
			if (array[j][i] == '.')
				dot++;
			if (array[j][i] == '#')
				bar++;
			i++;
		}
		j++;
		if (dot != 12 || bar != 4)
			return (0);
	}
	return (1);
}

static char **array_cut(char *str)
{
	char	**array;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	array = (char **)malloc(sizeof(*array) * 27);
	len = ft_strlen(str);
	while (i < len)
	{
		array[j++] = ft_strsub(str, i, 21);
		i += 21;
	}
	array[j] = NULL;
	return array;
}

char	**check1(int argc, char const *argv[])
{
	int		fd;
	int		ret;
	char	buf[1];
	char	str[600];
	int		i;
	char	**array;

	i = 0;
	if (argc == 1 || argc > 2)
	{
		ft_putstr("arguments error\n");
		return NULL;
	}
	fd = open(argv[1], O_RDONLY);
	while ((ret = read(fd, buf, 1)))
		str[i++] = buf[0];
	array = array_cut(str);
	if (cheker(array) == 1)
		return (array);
	return NULL;
}



