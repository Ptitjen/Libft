/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:04:58 by jeulliot          #+#    #+#             */
/*   Updated: 2022/02/24 22:18:55 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*t;
	t_list	*tmp;

	t = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp)
		{
			ft_lstadd_back(&t, tmp);
			lst = lst->next;
		}
		else
		{
			ft_lstclear(&t, del);
			return (t);
		}
	}
	return (t);
}
