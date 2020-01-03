/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 08:08:45 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/16 10:23:06 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dest;
	unsigned char		*str;
	unsigned char		ch;

	dest = (unsigned char*)dst;
	str = (unsigned char*)src;
	ch = c;
	while (n > 0)
	{
		*dest = *str;
		if (ch == *str)
		{
			dest++;
			return ((void*)dest);
		}
		dest++;
		str++;
		n--;
	}
	return (0);
}
