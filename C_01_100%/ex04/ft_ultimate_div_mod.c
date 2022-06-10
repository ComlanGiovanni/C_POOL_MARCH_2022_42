/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:43:57 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/12 17:03:45 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = 1;
	mod = 1;
	if (div != 0)
	{		
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}
