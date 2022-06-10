/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:34:57 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/13 22:36:09 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len_dest;
	int	idx;

	len_dest = ft_strlen(dest);
	idx = 0;
	while (src[idx] != '\0')
	{
		dest[len_dest] = src[idx];
		len_dest++;
		idx++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
