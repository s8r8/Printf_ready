/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 07:28:51 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/08 19:12:33 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char				*dest;
	const char			*str;
	unsigned long int	i;

	dest = dst;
	str = src;
	i = 0;
	if (dest != str)
	{
		while (i < n)
		{
			dest[i] = str[i];
			i++;
		}
	}
	return (dst);
}
