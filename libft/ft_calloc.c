/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:20:33 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/16 13:23:51 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char				*space;
	unsigned long int	i;
	unsigned long int	len;

	i = 0;
	len = size * count;
	space = malloc(count * size);
	if (space == NULL)
		return (0);
	while (len > i)
	{
		space[i] = '\0';
		i++;
	}
	return ((void*)space);
}
