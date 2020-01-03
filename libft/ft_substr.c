/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 18:53:01 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/21 18:48:12 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*str;
	unsigned long int	i;
	unsigned int		str_len;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(str = (char*)malloc(len + 1)))
		return (NULL);
	str_len = ft_strlen(s);
	if (start > str_len)
	{
		str[i] = '\0';
		return (str);
	}
	while (len > i)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
