/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:16:13 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/27 19:48:32 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}

int	check_base(char *base)
{
	int	i;
	int	doublon;
	int	len_base;

	len_base = ft_strlen(base);
	i = 0;
	if (base[0] == '\0' || len_base == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] > 126 || base[i] == 43 || base[i] == 45)
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
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	long		nb;

	base_len = ft_strlen(base);
	nb = nbr;
	if (check_base(base) == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < base_len)
			ft_putchar(base[nb]);
		if (nb >= base_len)
		{
			ft_putnbr_base(nb / base_len, base);
			ft_putnbr_base(nb % base_len, base);
		}
	}
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr_base(-666, "0123456789ABCDEF");
}*/
