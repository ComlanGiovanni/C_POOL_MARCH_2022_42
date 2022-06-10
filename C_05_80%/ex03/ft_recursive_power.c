/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:52:44 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/20 14:35:36 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	while (power > 1)
		return (nb = nb * ft_recursive_power(nb, (power - 1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	return (res);
}
/*
#include <stdio.h>

int main ()
{
	printf("%d\n", ft_recursive_power(2,0));
	printf("%d\n", ft_recursive_power(0,5));
	printf("%d\n", ft_recursive_power(2,1));
	printf("%d\n", ft_recursive_power(5,3));
	printf("%d\n", ft_recursive_power(0,1));
	printf("%d\n", ft_recursive_power(9,4));
	printf("--%d--\n", ft_recursive_power(0,0));
	return (0);
}*/
