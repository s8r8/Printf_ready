/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:51:29 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/19 17:34:46 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_malloc(char const *s, char c)
{
	int				i;
	int				count;
	char			**aux;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
	}
	if (!(aux = (char**)malloc((count + 1) * sizeof(char*))))
		return (NULL);
	return (aux);
}

char			**ft_split(char const *s, char c)
{
	char			**str;
	unsigned int	i;
	size_t			len;

	i = 0;
	len = 0;
	if (s == NULL)
		return (NULL);
	if (!(str = ft_malloc(s, c)))
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			while (s[len] != c && s[len])
				len++;
			str[i++] = ft_substr(s, 0, len);
			s += len;
		}
		len = 0;
	}
	str[i] = NULL;
	return (str);
}
