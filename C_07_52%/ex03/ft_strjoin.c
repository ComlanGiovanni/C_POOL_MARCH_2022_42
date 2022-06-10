/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:45:03 by gcomlan           #+#    #+#             */
/*   Updated: 2022/03/23 15:04:38 by gcomlan          ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	idx;

	idx = 0;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

int	ft_len_strs(int size, char **strs, char *sep)
{
	int	len;
	int	idx;
	int	len_sep;

	len = 0;
	idx = 0;
	len_sep = ft_strlen(sep);
	while (idx < size)
	{
		len += ft_strlen(strs[idx]);
		len += len_sep;
		idx++;
	}
	len -= len_sep;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*res;
	char	*tmp_res;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	len = ft_len_strs(size, strs, sep);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	len = 0;
	tmp_res = res;
	while (len < size)
	{
		ft_strcpy(tmp_res, strs[len]);
		tmp_res += ft_strlen(strs[len]);
		if (len < size - 1)
		{
			ft_strcpy(tmp_res, sep);
			tmp_res += ft_strlen(sep);
		}
		len++;
	}
	*tmp_res = '\0';
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int	size;
	char	*first;
	char	*second;
	char	*third;
	char	*fourth;
	char	*fifth;
	char	*sep;
	char	**strs;
	char	*res;

	size = 5;
	first = "Follow";
	second = "The";
	third = "white";
	fourth = "Rabbit";
	fifth = ".";
	sep = "[*]";

	strs = (char **)malloc(size* sizeof(char *));
	
	strs[0] = (char *)malloc(sizeof(char) * ft_strlen(first) + 1);
	strs[1] = (char *)malloc(sizeof(char) * ft_strlen(second) + 1);
	strs[2] = (char *)malloc(sizeof(char) * ft_strlen(third) + 1);
	strs[3] = (char *)malloc(sizeof(char) * ft_strlen(fourth) + 1);
	strs[4] = (char *)malloc(sizeof(char) * ft_strlen(fifth) + 1);

	strs[0] = first;
	strs[1] = second;
	strs[2] = third;
	strs[3] = fourth;
	strs[4] = fifth;

	printf("Res : %s", ft_strjoin(size, strs, sep));
}*/
