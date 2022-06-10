/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:44:08 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/23 12:31:45 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

char	*ft_strdup(char *src)
{
	int		idx;
	char	*dest;

	idx = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (dest)
	{
		while (src[idx] != '\0')
		{
			dest[idx] = src[idx];
			idx++;
		}
		dest[idx] = '\0';
		return (dest);
	}
	else
		return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char *dest = ft_strdup("DUPLICATE");
	printf("%s", dest);
}*/
