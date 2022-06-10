/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:45:18 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/26 17:11:45 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	doublon;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] >= 127 || base[i] == 43 || base[i] == 45)
			return (0);
		doublon = i + 1;
		while (base[doublon] != '\0')
		{
			if (base[i] == base[doublon])
				return (0);
			doublon++;
		}
		i++;
	}
	return (i);
}

int	check_char(char str, char *base)
{
	int	nbr;

	nbr = 0;
	while (base[nbr] != '\0')
	{
		if (str == base[nbr])
			return (nbr);
		nbr++;
	}
	return (-1);
}

int	ft_sign(char *str, int *idx_ptr)
{
	int	sign;
	int	idx;

	sign = 1;
	idx = 0;
	while (str[idx] == ' ' || (str[idx] >= '\t' && str[idx] <= '\r'))
		idx++;
	while (str[idx] != '\0' && (str[idx] == '-' || str[idx] == '+'))
	{
		if (str[idx] == '-')
			sign *= -1;
		idx++;
	}
	*idx_ptr = idx;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int				idx;
	int				sign;
	int				len_base;
	long long int	storage;
	long long int	s2;

	idx = 0;
	sign = 1;
	storage = 0;
	len_base = check_base(base);
	if (check_base(base) >= 2)
	{
		sign = ft_sign(str, &idx);
		s2 = check_char(str[idx], base);
		while (s2 != -1)
		{
			storage = (storage * len_base) + s2;
			idx++;
			s2 = check_char(str[idx], base);
		}
		return (storage * sign);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi_base("-666", "0123456789ABCDEF"));
}*/
