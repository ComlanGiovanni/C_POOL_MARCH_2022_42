/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:50:08 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/15 10:29:22 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_printable(char str)
{
	int	idx;

	idx = 0;
	if (!(str >= 32 && str <= 126))
		return (0);
	idx++;
	return (1);
}

void	ft_char_to_hexa(unsigned char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[c / 16]);
	ft_putchar(hexa[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (ft_str_is_printable(str[idx]) == 1)
			ft_putchar(str[idx]);
		else
		{
			ft_putchar('\\');
			ft_char_to_hexa((unsigned char)str[idx]);
		}
		idx++;
	}
}
