/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 10:22:33 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/18 10:30:55 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int lst_size;

	lst_size = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst_size++;
		lst = lst->next;
	}
	return (lst_size);
}
