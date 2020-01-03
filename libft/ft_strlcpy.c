/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:36:23 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/21 19:01:07 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	index;
	int				i;

	i = 0;
	index = 0;
	if (dst == NULL && src == NULL)
		return (0);
	while (src[i] != '\0')
	{
		i++;
	}
	if (dstsize == 0)
		return (i);
	while (index < dstsize - 1 && src[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (i);
}
