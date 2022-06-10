/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 10:45:03 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/18 11:21:14 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main()
{
	printf("%d\n",ft_recursive_factorial(1));
	printf("%d\n",ft_recursive_factorial(2));
	printf("%d\n",ft_recursive_factorial(3));
	printf("%d\n",ft_recursive_factorial(4));
	printf("%d\n",ft_recursive_factorial(5));
	printf("%d\n",ft_recursive_factorial(6));
	printf("%d\n",ft_recursive_factorial(7));
}*/
