/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 07:30:43 by sventas-          #+#    #+#             */
/*   Updated: 2020/01/03 11:08:47 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_print
{
	va_list	args;
	int		len;
	char	*format;
	int		width;
	int		precision;
	int		sign;
	char	sp_z;
	char	conversor;
}				t_print;

int		ft_printf(const char *format, ...);
void	ft_analyse_args(t_print *p);
void	ft_conversor(t_print *p);
void	ft_flags(t_print *p);
void	ft_conv_char(t_print *p);
void	ft_conv_str(t_print *p);
void	ft_conv_d(t_print *p);
void	ft_conv_u(t_print *p);
void	ft_conv_x(t_print *p);
void	ft_conv_p(t_print *p);
void	ft_width(t_print *p);
void	ft_precision(t_print *p);
void	ft_spaces(t_print *p, int len_arg, char *value);
void	ft_final_print(char *value, t_print *p);
int		ft_strlen(const char *s);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_itoa(int n);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
