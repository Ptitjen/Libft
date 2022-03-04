/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:12:47 by jeulliot          #+#    #+#             */
/*   Updated: 2022/02/28 14:42:45 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = 0;
	p = 0;
	if (needle[0] == '\0')
		return ((char *)(haystack));
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			p = (char *)haystack + i;
			j = 0;
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				if (needle[j + 1] == '\0')
					return (p);
				j++;
			}
		p = 0;
		}
	i ++;
	}
	return (NULL);
}
