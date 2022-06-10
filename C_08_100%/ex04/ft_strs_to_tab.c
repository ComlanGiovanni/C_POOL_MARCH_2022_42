/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:04:36 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/29 13:57:52 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stddef.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

char	*ft_strdup(char *src)
{
	int		idx;
	char	*dest;

	idx = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (dest)
	{
		while (src[idx] != '\0')
		{
			dest[idx] = src[idx];
			idx++;
		}
		dest[idx] = '\0';
		return (dest);
	}
	else
		return (0);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					idx;
	struct s_stock_str	*tab;

	tab = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!tab)
		return (NULL);
	idx = 0;
	while (idx < ac)
	{
		tab[idx].size = ft_strlen(av[idx]);
		tab[idx].str = av[idx];
		tab[idx].copy = ft_strdup(av[idx]);
		idx++;
	}
	tab[idx].str = 0;
	tab[idx].copy = 0;
	return (tab);
}
/*
#include "ft_stock_str.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int					idx;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	idx = 1;
	while (idx < argc)
	{
		printf("\t > %s %d\n", structs[idx].str, structs[idx].size);
		idx++;
	}
}*/
