/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 15:42:49 by sventas-          #+#    #+#             */
/*   Updated: 2020/01/03 11:01:21 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static char	*ft_unsigned_itoa(unsigned int nb)
{
	int				len;
	unsigned int	aux;
	char			*str_nb;
	int				len2;

	len = 1;
	aux = nb;
	while (aux /= 10)
		len++;
	if (!(str_nb = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	str_nb[len] = '\0';
	while (len--)
	{
		str_nb[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	len2 = ft_strlen(str_nb);
	return (str_nb);
}

void		ft_conv_u(t_print *p)
{
	int		nb;
	char	*nb_str;

	p->conversor = 'u';
	nb = va_arg(p->args, int);
	nb_str = ft_unsigned_itoa(nb);
	ft_final_print(nb_str, p);
}
