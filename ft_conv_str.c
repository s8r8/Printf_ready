/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 17:50:22 by sventas-          #+#    #+#             */
/*   Updated: 2019/12/30 19:48:24 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_conv_str(t_print *p)
{
	char *str;

	str = va_arg(p->args, char *);
	if (str == NULL)
		str = "(null)";
	p->conversor = 's';
	ft_final_print(str, p);
}
