/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:55:32 by jeulliot          #+#    #+#             */
/*   Updated: 2022/02/28 14:41:36 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *) src;
	tmp2 = (unsigned char *) dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src >= dst)
	{
		i = 0;
		while (i < len)
		{
			tmp2[i] = tmp1[i];
			i ++;
		}
	}
	else
		while (len--)
			tmp2[len] = tmp1[len];
	dst = (void *) tmp2;
	return (dst);
}
