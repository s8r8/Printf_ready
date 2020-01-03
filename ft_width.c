/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 11:53:08 by sventas-          #+#    #+#             */
/*   Updated: 2020/01/03 11:03:18 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_width(t_print *p)
{
	p->width = 0;
	if (*p->format == '*')
	{
		p->width = va_arg(p->args, int);
		if (p->width < 0)
		{
			p->sign = 1;
			p->sp_z = ' ';
			p->width = p->width * -1;
		}
		p->format++;
	}
	else
	{
		p->width = ft_atoi(p->format);
		while (ft_isdigit(*p->format) || *p->format == '-')
			p->format++;
		if (p->width < 0)
			p->width *= -1;
	}
}
