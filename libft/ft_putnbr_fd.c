/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 13:08:43 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/16 13:59:36 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print(int i, char *array, int fd)
{
	while (i >= 0)
	{
		write(fd, &array[i], 1);
		i--;
	}
}

static void	ft_outnbr_aux(int nb, int count, int fd)
{
	char	array[count];
	int		i;

	i = 0;
	while (nb > 9)
	{
		array[i] = nb % 10 + '0';
		i++;
		nb /= 10;
	}
	if (nb != -2147483648)
	{
		array[i] = nb + '0';
		ft_print(i, array, fd);
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	int nb;
	int count;

	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(fd, "-2147483648", 11);
		}
		else
		{
			write(fd, "-", 1);
			n *= -1;
		}
	}
	nb = n;
	count = '0';
	while (nb > 9)
	{
		nb /= 10;
		count++;
	}
	ft_outnbr_aux(n, count, fd);
}
