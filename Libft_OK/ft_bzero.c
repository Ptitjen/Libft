/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:42:19 by jeulliot          #+#    #+#             */
/*   Updated: 2022/02/23 09:54:45 by jeulliot         ###   ########.fr       */
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

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
