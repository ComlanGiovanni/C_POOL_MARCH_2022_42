/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:37:20 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/23 12:42:53 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	idx;
	int	*tab;
	int	len_range;

	if (min >= max)
		return (NULL);
	len_range = max - min;
	tab = malloc(len_range * sizeof(int));
	if (tab)
	{
		idx = 0;
		while (idx < len_range)
		{
			tab[idx] = min + idx;
			idx++;
		}
		return (tab);
	}
	else
		return (NULL);
}
/*
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_put_tab(int *str, int size)
{
	int	idx;

	idx = 0;
	while (idx < size)
	{
		//ft_putchar(str[size] + '0');
		ft_putnbr(str[idx]);
		ft_putchar(' ');
		idx++;
	}
}

int main (void)
{
	int	size = 300;
	int 	*tab = ft_range(-100, 200);
	ft_put_tab(tab, size);
}*/
