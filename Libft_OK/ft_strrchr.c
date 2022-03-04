/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:53:43 by jeulliot          #+#    #+#             */
/*   Updated: 2022/02/23 12:59:01 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	size_t	lenstr;
	size_t	i;

	lenstr = ft_strlen(str);
	if (c == '\0')
		return ((char *)(str + lenstr));
	if (lenstr == 0)
		return (0);
	i = 0;
	while (i < lenstr)
	{
		if (str[lenstr - i - 1] == c)
			return ((char *)(str + (lenstr - i - 1)));
		i ++;
	}
	return (0);
}
