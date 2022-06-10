/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 20:56:55 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/20 21:27:44 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long int	idx;
	long long int	tmp_nb;

	idx = 1;
	tmp_nb = nb;
	if (nb <= 0)
		return (0);
	if (nb == 2)
		return (0);
	while ((idx * idx) < tmp_nb)
		idx++;
	if ((tmp_nb % idx) == 0)
		return (idx);
	return (0);
}
/*
#include <stdio.h>

int main (void)
{
	printf("%d", ft_sqrt(144));
}*/
