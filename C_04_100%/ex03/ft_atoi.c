/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:58:57 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/26 17:12:21 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int						idx;
	int						sign;
	long long int			storage;

	idx = 0;
	sign = 1;
	storage = 0;
	while (str[idx] == ' ' || (str[idx] >= '\t' && str[idx] <= '\r'))
		idx++;
	while (str[idx] != '\0' && (str[idx] == '-' || str[idx] == '+'))
	{
		if (str[idx] == '-')
			sign *= -1;
		idx++;
	}
	while (str[idx] != '\0' && (str[idx] >= '0' && str[idx] <= '9'))
	{
		storage *= 10;
		storage += str[idx] - 48;
		idx++;
	}
	return (storage * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi("   	  -----75SDdd85eeeeee4552"));
}*/
