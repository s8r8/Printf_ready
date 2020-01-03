/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 07:54:52 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/18 07:54:54 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char				*dest;
	char				*str;
	unsigned long int	i;

	dest = (char *)dst;
	str = (char*)src;
	i = 0;
	if ((dest == NULL && src == NULL) || !len)
		return (dest);
	if (dest > str)
	{
		while (len >= ++i)
			dest[len - i] = str[len - i];
	}
	else
	{
		while (i < len)
		{
			dest[i] = str[i];
			i++;
		}
	}
	return (dst);
}
