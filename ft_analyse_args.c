/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_analyse_args.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 19:16:29 by saraventasa       #+#    #+#             */
/*   Updated: 2020/01/03 10:35:25 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_analyse_args(t_print *p)
{
	if (*p->format == '-' || *p->format == '0')
		ft_flags(p);
	if (ft_isdigit(*p->format) || *p->format == '*' || *p->format == '-')
		ft_width(p);
	if (*p->format == '.')
	{
		p->format++;
		ft_precision(p);
	}
	if (*p->format == '%')
	{
		ft_final_print("%", p);
		return ;
	}
	ft_conversor(p);
}

void	ft_conversor(t_print *p)
{
	if (*p->format == 'c')
		ft_conv_char(p);
	else if (*p->format == 's')
		ft_conv_str(p);
	else if (*p->format == 'd' || *p->format == 'i')
		ft_conv_d(p);
	else if (*p->format == 'u')
		ft_conv_u(p);
	else if (*p->format == 'x')
	{
		p->conversor = 'x';
		ft_conv_x(p);
	}
	else if (*p->format == 'X')
	{
		p->conversor = 'X';
		ft_conv_x(p);
	}
	else if (*p->format == 'p')
		ft_conv_p(p);
}
