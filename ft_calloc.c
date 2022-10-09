/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 09:34:17 by jeulliot          #+#    #+#             */
/*   Updated: 2022/02/23 09:49:17 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;

	tab = malloc (count * size);
	if (tab == NULL)
		return (NULL);
	ft_memset(tab, 0, count * size);
	return (tab);
}
