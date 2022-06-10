/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:35:33 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/17 20:52:13 by gcomlan          ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	idx_src;
	unsigned int	idx_dest;
	unsigned int	dest_len;
	unsigned int	src_len;

	idx_src = 0;
	idx_dest = 0;
	while (dest[idx_dest] != '\0')
	{
		idx_dest++;
	}
	dest_len = idx_dest;
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src [idx_src] != '\0' && idx_src < size - dest_len - 1)
	{
		dest[idx_dest] = src[idx_src];
		idx_src++;
		idx_dest++;
	}
	dest[idx_dest] = '\0';
	return (dest_len + src_len);
}
