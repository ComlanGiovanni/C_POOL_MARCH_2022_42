/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:35:07 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/14 15:18:12 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	idx;
	int				len_dest;

	len_dest = ft_strlen(dest);
	idx = 0;
	while (src[idx] != '\0' && idx < nb)
	{
		dest[len_dest] = src[idx];
		len_dest++;
		idx++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
