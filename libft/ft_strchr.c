/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:04:41 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/11 12:18:46 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (*str == c)
		return (str);
	if (c == 0)
		return ("\0");
	return (NULL);
}
