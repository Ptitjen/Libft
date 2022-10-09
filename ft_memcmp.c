/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:49:37 by jeulliot          #+#    #+#             */
/*   Updated: 2022/02/23 09:56:45 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s3;
	unsigned char	*s4;

	i = 0;
	s3 = (unsigned char *) s1;
	s4 = (unsigned char *) s2;
	while (i < n)
	{
		if (s3[i] != s4[i])
			return (s3[i] - s4[i]);
		i ++;
	}
	return (0);
}
