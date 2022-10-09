/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:13:47 by jeulliot          #+#    #+#             */
/*   Updated: 2022/02/24 16:31:28 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t;

	if (*lst == NULL || lst == NULL)
		return ;
	t = *lst;
	while (t)
	{
		ft_lstdelone(t, del);
		t = t->next;
	}
	*lst = NULL;
}
