/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:53:40 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/11 13:09:18 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*space;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	space = (char*)malloc(len + 1);
	if (space == NULL)
		return (0);
	while (s1[i] != '\0')
	{
		space[i] = s1[i];
		i++;
	}
	space[i] = '\0';
	return (space);
}
