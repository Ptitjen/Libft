/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:45:44 by jeulliot          #+#    #+#             */
/*   Updated: 2022/02/25 15:46:24 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i ++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	unsigned int		len;
	char				*tab;

	i = 0;
	len = ft_strlen(s);
	tab = malloc(sizeof(char) * (len + 1));
	if (tab == NULL || s == NULL)
		return (NULL);
	while (i < len)
	{
		tab[i] = f(i, s[i]);
		i ++;
	}
	tab[i] = '\0';
	return (tab);
}
