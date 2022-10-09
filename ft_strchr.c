/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:17:31 by jeulliot          #+#    #+#             */
/*   Updated: 2022/02/23 12:41:08 by jeulliot         ###   ########.fr       */
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

char	*ft_strchr(const char *str, int c)
{
	size_t	lenstr;
	size_t	i;

	lenstr = ft_strlen1(str);
	if (c == '\0')
		return ((char *)(str + lenstr));
	i = 0;
	while (i < lenstr)
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i ++;
	}
	return (0);
}
