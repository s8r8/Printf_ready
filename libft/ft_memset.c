/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:02:47 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/08 19:12:41 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*buf;
	unsigned long	i;
	unsigned char	ch;

	buf = b;
	ch = c;
	i = 0;
	while (len > i)
	{
		buf[i] = ch;
		i++;
	}
	return (buf);
}
