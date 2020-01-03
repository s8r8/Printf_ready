/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 20:08:24 by saraventasa       #+#    #+#             */
/*   Updated: 2020/01/03 09:59:03 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_conv_char(t_print *p)
{
	char	c[2];
	int		len_arg;

	c[0] = (char)va_arg(p->args, int);
	c[1] = '\0';
	len_arg = 1;
	if (c[0] == '\0')
	{
		p->conversor = 'c';
		p->len++;
		p->width--;
	}
	ft_final_print(c, p);
}
