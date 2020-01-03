/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 19:41:42 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/21 18:52:11 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*str;
	int		i;
	int		i2;

	i = -1;
	i2 = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (s1[++i] != '\0')
		str[i2++] = s1[i];
	i = -1;
	while (s2[++i] != '\0')
		str[i2++] = s2[i];
	str[i2] = '\0';
	return (str);
}
