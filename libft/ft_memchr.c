/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 18:41:35 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/23 12:04:22 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	size_t			i;
	unsigned char	*str;

	i = 0;
	ch = (unsigned char)c;
	str = (unsigned char*)s;
	while (i < n)
	{
		if (*str == ch)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}
