/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:34:48 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/14 17:16:56 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;
	int				res;

	idx = 0;
	res = 0;
	while (s1[idx] != '\0' && s2[idx] != '\0' && idx < n)
	{
		if (s1[idx] != s2[idx])
			return (s1[idx] - s2[idx]);
		idx++;
	}
	if (idx < n)
		res = s1[idx] - s2[idx];
	else
		res = 0;
	return (res);
}
