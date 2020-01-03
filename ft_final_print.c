/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 17:53:11 by sventas-          #+#    #+#             */
/*   Updated: 2020/01/03 10:49:20 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_print_precision(char *value, t_print *p)
{
	int len;

	len = ft_strlen(value);
	if (*value == '-' && p->sp_z == ' ')
	{
		write(1, "-", 1);
		p->len++;
		value++;
		len--;
	}
	while (p->precision > len)
	{
		write(1, "0", 1);
		p->len++;
		len++;
	}
}

void	ft_putchar_new(char *value, t_print *p)
{
	if (p->precision > 0 && p->conversor != 's')
		ft_print_precision(value, p);
	if (p->conversor == 'p')
	{
		write(1, "0x", 2);
		p->len += 2;
	}
	if (*value == '0' && p->precision == 0)
		return ;
	if (p->conversor == 'c')
	{
		write(1, "\0", 1);
		return ;
	}
	while (*value != '\0')
	{
		if (*value == '-' && p->conversor == 'd' && (p->precision > 0
		|| p->sp_z == '0'))
			value++;
		write(1, value, 1);
		p->len++;
		value++;
	}
}

char	*ft_cut_str(char *value, t_print *p)
{
	char *new_value;

	new_value = ft_substr(value, 0, p->precision);
	return (new_value);
}

void	ft_final_print(char *value, t_print *p)
{
	int len_str;

	len_str = ft_strlen(value);
	if (*value == '0' && p->precision == 0)
		len_str = 0;
	if (*value == '-' && p->precision >= 0)
		len_str--;
	len_str = p->conversor == 'p' ? len_str + 2 : len_str;
	if (p->precision >= 0 && len_str > p->precision && p->conversor == 's')
	{
		value = ft_cut_str(value, p);
		len_str = p->precision;
	}
	if (p->precision > len_str && p->conversor != 's')
		len_str = p->precision;
	if (p->sign == 1)
	{
		ft_putchar_new(value, p);
		ft_spaces(p, len_str, value);
	}
	else
	{
		ft_spaces(p, len_str, value);
		ft_putchar_new(value, p);
	}
}
