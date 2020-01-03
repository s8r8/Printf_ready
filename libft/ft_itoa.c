/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 10:26:05 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/16 11:15:46 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_lennb(long int n)
{
	int			len;

	len = 1;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int			len_nb;
	char		*str_nb;
	int			sign;
	long int	nb;

	sign = 0;
	nb = n;
	len_nb = ft_lennb(nb);
	if (nb < 0)
	{
		nb = nb * -1;
		sign = 1;
	}
	if (!(str_nb = malloc(len_nb + 1 * sizeof(char))))
		return (NULL);
	str_nb[len_nb] = '\0';
	while (nb > 9)
	{
		str_nb[--len_nb] = (nb % 10) + 48;
		nb = nb / 10;
	}
	str_nb[--len_nb] = (nb % 10) + 48;
	if (sign == 1)
		str_nb[0] = '-';
	return (str_nb);
}
