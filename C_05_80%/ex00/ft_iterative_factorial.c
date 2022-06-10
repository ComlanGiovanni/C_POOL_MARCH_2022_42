/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 10:25:05 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/18 10:44:41 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		res = 0;
	else
	{
		res = 1;
		while (nb > 0)
		{
			res = res * nb;
			nb--;
		}
	}
	return (res);
}
/*
int main()
{
	printf("%d\n",ft_iterative_factorial(1));
	printf("%d\n",ft_iterative_factorial(2));
	printf("%d\n",ft_iterative_factorial(3));
	printf("%d\n",ft_iterative_factorial(4));
	printf("%d\n",ft_iterative_factorial(5));
	printf("%d\n",ft_iterative_factorial(6));
	printf("%d\n",ft_iterative_factorial(7));
	printf("%d\n",ft_iterative_factorial(8));
	printf("%d\n",ft_iterative_factorial(9));
	printf("%d\n",ft_iterative_factorial(10));
	printf("%d\n",ft_iterative_factorial(11));
	printf("%d\n",ft_iterative_factorial(0));
	
}*/
