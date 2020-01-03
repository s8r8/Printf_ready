/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:01:56 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/18 13:23:00 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sign(const char *str)
{
	int sign;
	int i;

	sign = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = 1;
	if (sign == 1)
		return (-1);
	else
		return (1);
}

int			ft_atoi(const char *str)
{
	int			i;
	long int	nb;
	int			sign;

	i = 0;
	nb = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = ft_sign(str);
	if (sign == -1)
		i++;
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i++] - 48);
		if (nb * sign > 2147483647)
			return (-1);
		if (nb * sign < -2147483648)
			return (0);
	}
	nb = nb * sign;
	return (nb);
}
