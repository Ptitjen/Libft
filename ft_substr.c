/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:14:26 by jeulliot          #+#    #+#             */
/*   Updated: 2022/02/22 10:51:47 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
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

static int	ft_checklength(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = ft_strlen(s);
	if (start > i)
		return (0);
	if (start + len > i)
		return (i - start);
	else
		return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (0);
	str = malloc(sizeof(char) * (ft_checklength(s, start, len) + 1));
	if (str == NULL)
		return (NULL);
	if (len == 0)
	{
		str[0] = '\0';
		return (str);
	}
	i = 0;
	j = 0;
	while (i < start && s[i] != '\0')
		i ++;
	while (j < len && s[i + j] != '\0')
	{
		str[j] = s[i + j];
		j ++;
	}
	str[j] = '\0';
	return (str);
}
