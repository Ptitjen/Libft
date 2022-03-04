/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:38:37 by jeulliot          #+#    #+#             */
/*   Updated: 2022/02/28 14:42:28 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

static size_t	ft_strlen1(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen1(src);
	if (dstsize == 0)
		return (n);
	while (i < dstsize - 1 && i < n)
	{
		dst[i] = src[i];
		i ++;
	}			
	dst[i] = '\0';
	return (n);
}
