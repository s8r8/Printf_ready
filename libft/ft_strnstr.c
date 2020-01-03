/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:33:10 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/17 19:22:47 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long int	i;

	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (len > 0 && *haystack != '\0')
	{
		if (*haystack == needle[0])
		{
			i = 1;
			while (i < len &&
					needle[i] != '\0' &&
					haystack[i] != '\0' &&
					haystack[i] == needle[i])
				i++;
			if (needle[i] == '\0')
				return ((char*)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
