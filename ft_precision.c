/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 18:27:19 by saraventasa       #+#    #+#             */
/*   Updated: 2020/01/03 14:00:14 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void		ft_precision(t_print *p)
{
	if (*p->format == '*')
	{
		p->precision = va_arg(p->args, int);
		p->format++;
		if (p->precision < 0)
			p->precision = -1;
	}
	else if (ft_isdigit(*p->format))
	{
		p->precision = ft_atoi(p->format);
		while (ft_isdigit(*p->format))
			p->format++;
	}
	else
		p->precision = 0;
	if (p->precision >= 0)
		p->sp_z = ' ';
}
