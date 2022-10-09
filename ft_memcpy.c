/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:29:00 by jeulliot          #+#    #+#             */
/*   Updated: 2022/02/23 11:23:09 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) b;
	while (i < n)
	{
		str[i] = c;
		i ++;
	}
	b = (void *) str;
	return (b);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp1;

	tmp1 = (unsigned char *) src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		ft_memset(dst + i, tmp1[i], 1);
		i ++;
	}
	return ((void *) dst);
}
