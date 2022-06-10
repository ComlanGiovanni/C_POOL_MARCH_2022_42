/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:22:37 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/18 11:48:20 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	tmp_nb;

	tmp_nb = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
	{
		while (power > 1)
		{
			tmp_nb *= nb;
			power--;
		}
		return (tmp_nb);
	}
}
/*
#include <stdio.h>

int main ()
{
	printf("%d\n", ft_iterative_power(2,0));
	printf("%d\n", ft_iterative_power(0,5));
	printf("%d\n", ft_iterative_power(2,1));
	printf("%d\n", ft_iterative_power(5,3));
	printf("%d\n", ft_iterative_power(0,1));
	printf("%d\n", ft_iterative_power(9,4));
	printf("%d\n", ft_iterative_power(0,0));
}*/
