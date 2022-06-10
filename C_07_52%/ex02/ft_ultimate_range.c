/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:44:34 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/23 13:00:22 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len_range;
	int	idx;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len_range = max - min;
	tab = malloc(len_range * sizeof(int));
	if (!tab)
		return (-1);
	idx = 0;
	while (idx < len_range)
	{
		tab[idx] = min + idx;
		idx++;
	}
	*range = tab;
	return (len_range);
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

void	ft_put_tab(int *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		//ft_putchar(str[size] + '0');
		ft_putnbr(str[idx]);
		ft_putchar(' ');
		idx++;
	}
}

int main ()
{
	int *tab;
	int size = ft_ultimate_range(&tab, 5, 10);
	ft_put_tab(tab);
	write(1,"\n", 1);
	printf("la size du tab est : %d", size);
}*/
