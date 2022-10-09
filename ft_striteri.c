/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:09:52 by jeulliot          #+#    #+#             */
/*   Updated: 2022/02/23 15:58:39 by jeulliot         ###   ########.fr       */
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

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int		i;
	unsigned int		len;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	len = ft_strlen1(s);
	while (i < len)
	{
		f(i, &s[i]);
		i ++;
	}
}
