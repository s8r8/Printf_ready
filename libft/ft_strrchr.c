/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:21:38 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/08 19:14:08 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	str = (char *)s;
	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	while (len >= 0)
	{
		if (*str == c)
			return (str);
		str--;
		len--;
	}
	return (NULL);
}
