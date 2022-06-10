/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:30:33 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/14 17:14:22 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while (s1[idx] == s2[idx] && (s1[idx] != '\0' || s2[idx] != '\0'))
	{
		idx++;
	}
	return (s1[idx] - s2[idx]);
}