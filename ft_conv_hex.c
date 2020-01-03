/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 18:38:02 by sventas-          #+#    #+#             */
/*   Updated: 2020/01/03 13:59:25 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_str_base(char c, char *value)
{
	char	base[2];

	base[0] = c;
	base[1] = '\0';
	value = ft_strjoin(value, base);
	return (value);
}

char	*ft_putnbr_base(unsigned long int nbr, char c, char *value, t_print *p)
{
	unsigned long int	n;

	n = nbr;
	if (n >= 16)
		value = ft_putnbr_base(n / 16, c, value, p);
	if ((n % 16) < 10)
		value = ft_str_base((n % 16) + '0', value);
	else if ((n % 16) > 9)
		value = ft_str_base((n % 16) + c, value);
	return (value);
}

void	ft_conv_x(t_print *p)
{
	unsigned int		nb;
	char				*value;
	char				option;

	option = p->conversor == 'x' ? 'W' : '7';
	value = malloc(1);
	value[0] = '\0';
	nb = va_arg(p->args, unsigned int);
	value = ft_putnbr_base(nb, option, value, p);
	ft_final_print(value, p);
	free(value);
}

void	ft_conv_p(t_print *p)
{
	unsigned long int	nb;
	char				*value;

	value = malloc(1);
	value[0] = '\0';
	p->conversor = 'p';
	nb = va_arg(p->args, unsigned long int);
	value = ft_putnbr_base(nb, 'W', value, p);
	ft_final_print(value, p);
	free(value);
}
