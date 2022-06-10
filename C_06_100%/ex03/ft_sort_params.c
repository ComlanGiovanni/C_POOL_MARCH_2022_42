/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:13:31 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/19 15:26:03 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
		ft_putchar(str[idx++]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while (s1[idx] == s2[idx] && (s1[idx] != '\0' || s2[idx] != '\0'))
		idx++;
	return (s1[idx] - s2[idx]);
}

void	ft_swap_str(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int argc, char **argv)
{
	int	start;
	int	idx;

	start = 1;
	while (start < argc - 1)
	{
		idx = 1;
		while (idx < argc - 1)
		{
			if (ft_strcmp(argv[idx], argv[idx + 1]) > 0)
				ft_swap_str(&argv[idx], &argv[idx + 1]);
			idx++;
		}
		start++;
	}
	start = 1;
	while (start < argc)
	{
		ft_putstr(argv[start]);
		ft_putchar('\n');
		start++;
	}
	return (0);
}
