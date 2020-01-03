/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:08:21 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/18 12:19:19 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *aux_lst;
	t_list *next;

	aux_lst = *lst;
	if (!lst || !del)
		return ;
	while (aux_lst)
	{
		next = aux_lst->next;
		del(aux_lst->content);
		free(aux_lst);
		aux_lst = next;
	}
	*lst = NULL;
}
