/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:29:34 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/18 13:03:14 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *aux;

	if (!lst)
		return (NULL);
	if (!(aux = ft_lstnew(f(lst->content))))
		return (NULL);
	new_list = aux;
	lst = lst->next;
	while (lst)
	{
		if (!(aux->next = ft_lstnew((f)(lst->content))))
			ft_lstclear(&new_list, del);
		aux = aux->next;
		lst = lst->next;
	}
	return (new_list);
}
