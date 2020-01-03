/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 08:56:12 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/18 11:01:22 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new_list;

	new_list = malloc(sizeof(t_list));
	if (new_list == NULL)
		return (NULL);
	new_list->content = (void*)content;
	new_list->next = NULL;
	return (new_list);
}
