/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 20:26:04 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/21 19:33:51 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_first(char const *s1, char const *set)
{
	int		i;
	int		i2;
	int		count;

	i = 0;
	i2 = 0;
	count = 0;
	while (set[i2] != '\0' && s1[i] != '\0')
	{
		if (s1[i] == set[i2])
		{
			i++;
			i2 = 0;
			count++;
		}
		else
			i2++;
	}
	return (count);
}

static int		ft_last(char const *s1, char const *set, int i)
{
	int		i2;
	int		aux_i;

	i2 = 0;
	aux_i = i;
	while (set[i2] != '\0' && (i - 1) >= 0)
	{
		if (s1[i - 1] == set[i2])
		{
			i--;
			i2 = 0;
		}
		else
			i2++;
	}
	if (i == 0)
		i = aux_i;
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*str;
	int		pos_first;
	int		pos_last;
	int		i;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	pos_first = ft_first(s1, set);
	len = ft_strlen(s1);
	pos_last = ft_last(s1, set, len);
	str = malloc(pos_last - pos_first + 1);
	if (str == NULL)
		return (NULL);
	while (pos_first < pos_last)
	{
		str[i] = s1[pos_first];
		pos_first++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
