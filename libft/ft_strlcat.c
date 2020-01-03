/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:59:38 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/21 20:00:26 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int index;
	unsigned int i;
	unsigned int i2;
	unsigned int counter;

	counter = ft_strlen(dst);
	i2 = 0;
	index = ft_strlen(dst);
	i = ft_strlen(src);
	if (dstsize == 0)
		return (i);
	while (index < dstsize - 1 && src[i2] != '\0')
	{
		dst[index] = src[i2];
		i2++;
		index++;
	}
	dst[index] = '\0';
	if (counter > dstsize)
		i += dstsize;
	else
		i += counter;
	return (i);
}
