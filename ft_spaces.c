/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spaces.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 18:37:01 by saraventasa       #+#    #+#             */
/*   Updated: 2020/01/03 10:54:52 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_spaces(t_print *p, int len_arg, char *value)
{
	if (*value == '-' && p->sp_z == '0')
	{
		write(1, "-", 1);
		p->len++;
		value++;
	}
	else if (*value == '-' && p->precision >= 0)
		len_arg++;
	while (p->width > len_arg)
	{
		write(1, &(p->sp_z), 1);
		p->width--;
		p->len++;
	}
}
