/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 07:43:40 by sventas-          #+#    #+#             */
/*   Updated: 2020/01/03 11:02:53 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_clean(t_print *p)
{
	p->width = 0;
	p->sign = 0;
	p->sp_z = ' ';
	p->conversor = 'a';
	p->precision = -1;
}

int		ft_printf(const char *format, ...)
{
	t_print p;

	va_start(p.args, format);
	p.len = 0;
	p.format = (char*)format;
	ft_clean(&p);
	while (*p.format != '\0')
	{
		if (*p.format != '%')
		{
			write(1, p.format, 1);
			p.format++;
			p.len++;
		}
		else if (*p.format == '%')
		{
			p.format++;
			ft_analyse_args(&p);
			p.format++;
			ft_clean(&p);
		}
	}
	va_end(p.args);
	return (p.len);
}
