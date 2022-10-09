/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:30:36 by jeulliot          #+#    #+#             */
/*   Updated: 2022/02/23 15:18:42 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

static size_t	ft_strlen1(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lendest;

	i = 0;
	j = 0;
	lendest = ft_strlen1(dst);
	if (dstsize == 0)
		return (ft_strlen1(src));
	while (dst[i] != '\0')
		i ++;
	while (src[j] != '\0' && (j + lendest + 1) < dstsize)
	{
		dst[i] = src[j];
		j ++;
		i ++;
	}
	if (dstsize != 0 && lendest <= dstsize)
	{
		dst[i] = '\0';
		return (lendest + ft_strlen1(src));
	}
	return (dstsize + ft_strlen1(src));
}
