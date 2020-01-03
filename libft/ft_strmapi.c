/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:16:31 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/16 12:25:13 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen((char *)s);
	if (!(str = malloc(len + 1 * sizeof(char))))
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = ((*f)(i, s[i]));
		i++;
	}
	str[i] = '\0';
	return (str);
}
