/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:35:17 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/13 23:13:27 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	idx;
	int	idx_str;

	idx_str = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[idx_str] != '\0')
	{
		idx = 0;
		while (to_find[idx] == str[idx + idx_str])
		{
			if (to_find[idx] != '\0' && to_find[idx + 1] == '\0')
			{
				return (&str[idx_str]);
			}
			idx++;
		}
		idx_str++;
	}
	return (0);
}
