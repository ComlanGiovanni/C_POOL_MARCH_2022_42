/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 22:08:37 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/29 21:22:07 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
{
	int	idx;

	idx = 0;
	while (charset[idx] != '\0')
	{
		if (c == charset[idx])
			return (1);
		idx++;
	}
	return (0);
}

int	ft_len_sep(char *str, char *charset)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0' && !ft_is_sep(str[idx], charset))
		idx++;
	return (idx);
}

char	*ft_is_str(char *str, char *charset)
{
	char	*string;
	int		idx;
	int		len_str;

	idx = 0;
	len_str = ft_len_sep(str, charset);
	string = (char *)malloc(sizeof(char) * (len_str + 1));
	while (idx < len_str)
	{
		string[idx] = str[idx];
		idx++;
	}
	string[idx] = '\0';
	return (string);
}

int	ft_count_str(char *str, char *charset)
{
	int	idx;
	int	nbr;

	nbr = 0;
	idx = 0;
	while (str[idx] != '\0')
	{
		while (str[idx] != '\0' && ft_is_sep(str[idx], charset))
			idx++;
		if (str[idx] != '\0')
			nbr++;
		while (str[idx] != '\0' && !ft_is_sep(str[idx], charset))
			idx++;
	}
	return (nbr);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		idx;
	int		len_tab;

	idx = 0;
	len_tab = ft_count_str(str, charset) + 1;
	tab = malloc(len_tab * sizeof(char *));
	while (str[idx] != '\0')
	{
		while (str[idx] != '\0' && ft_is_sep(*str, charset))
			str++;
		if (str[idx] != '\0')
		{
			tab[idx] = ft_is_str(str, charset);
			idx++;
		}
		while (str[idx] != '\0' && !ft_is_sep(*str, charset))
			str++;
	}
	tab[idx] = 0;
	return (tab);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	int	idx;
	char	**tab;

	tab = ft_split(argv[1], argv[2]);
	idx = 0;

	while (tab[idx])
	{
		printf("%s\n", tab[idx]);
		idx++;
	}
}*/
