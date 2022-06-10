/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:56:18 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/19 14:00:11 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		ft_putchar(str[size]);
		size++;
	}
}

int	main(int argc, char *argv[])
{
	int	idx;

	idx = argc - 1;
	while (idx > 0)
	{
		if (argv[idx] && argc)
			ft_putstr(argv[idx]);
		ft_putchar('\n');
		idx--;
	}
	return (0);
}
