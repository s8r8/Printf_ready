/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:51:51 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/11 08:40:49 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*str1;
	const unsigned char		*str2;
	unsigned long			i;
	int						comp;

	str1 = s1;
	str2 = s2;
	i = 0;
	comp = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && str1[i] == str2[i])
		i++;
	comp = str1[i] - str2[i];
	return (comp);
}
