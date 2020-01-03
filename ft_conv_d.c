/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 13:52:45 by sventas-          #+#    #+#             */
/*   Updated: 2020/01/03 09:59:33 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_conv_d(t_print *p)
{
	int		nb;
	char	*nb_str;

	p->conversor = 'd';
	nb = va_arg(p->args, int);
	nb_str = ft_itoa(nb);
	ft_final_print(nb_str, p);
}
