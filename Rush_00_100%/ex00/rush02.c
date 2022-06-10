/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablevin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:30:39 by ablevin           #+#    #+#             */
/*   Updated: 2022/03/12 15:34:21 by ablevin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(char begin, char middle, char end, int x)
{
	ft_putchar(begin);
	x--;
	while (x > 1)
	{
		ft_putchar(middle);
		x--;
	}
	if (x == 1)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush02(int x, int y)
{
	if (x < 1 || y < 1)
	{
		return ;
	}
	print_line('A', 'B', 'A', x);
	y--;
	while (y > 1)
	{
		print_line('B', ' ', 'B', x);
		y--;
	}
	if (y == 1)
	{
		print_line('C', 'B', 'C', x);
	}
}
