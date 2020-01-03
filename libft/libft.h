/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sventas- <sventas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:37:54 by sventas-          #+#    #+#             */
/*   Updated: 2019/11/21 19:14:12 by sventas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct 		s_list
{
	void 			*content;
	struct s_list 	*next;
} 					t_list;

/*Llena los primeros n(len) bytes de la cadena de caracteres dada con el valor c (convertido a char).
Devuelve la string dada*/
void			*ft_memset(void *b, int c, size_t len);
//Sobrescribe n bytes de memoria por ‘\0’ en la string dada. Si n es 0 no hace nada.
void			ft_bzero(void *s, size_t n);
//Copia n bytes del área de memoria de src al área de memoria  de dst . Devuelve un puntero de dst.
void			*ft_memcpy(void *dst, const void *src, size_t n);
/*Copia n bytes desde la string src a la string dst. Si el caracter c (como  unsigned char)
**se encuentra en la string src, la copia se para y el puntero va al byte después de la copia
de c en el destino. Si no se encuentra c, se copian n bytes y se devuelve NULL.*/
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
/*Copia n bytes del área de memoria src al área de memoria dst . Las áreas de memoria pueden superponerse.
Si el área de memoria de dst es mayor que src la copia se realiza de atrás hacia delante para hacerlo de una
forma no destructiva. */
void			*ft_memmove(void *dst, const void *src, size_t len);
/*Devuelve el puntero de s localizado en el área de memoria donde se encuentra c (convertido en undigned char)
en esa cadena, y NULL si no exite c.*/
void			*ft_memchr(const void *s, int c, size_t n);
/*Compara los primeros n bytes de las cadenas s1 y s2. Y devuelve el número dado por la resta del primer
elemento diferente entre s1 y s2, y 0 si ambas cadenas son iguales.*/
int				ft_memcmp(const void *s1, const void *s2, size_t n);
//Calcula la longitud de la string.
int				ft_strlen(const char *s);
/*
*/
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);

int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit (int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *haystack, const char *needle, size_t len);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, unsigned int start,size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

//BONUS
//Reserva memoria para un nuevo elemento que devuelve.
t_list			*ft_lstnew(void *content);
//Añade el elemento que le pasas al comienzo de la lista.
void			ft_lstadd_front(t_list **alst, t_list *new);
//Calcula el número de elementos de la lista
int				ft_lstsize(t_list *lst);
//devuelve el último elemento de la lista
t_list			*ft_lstlast(t_list *lst);
/*Añade el elemento new al final de la lista.
**alst (dirección del puntero al primer elemento de la lista)*/
void			ft_lstadd_back(t_list **alst, t_list *new);
//Libera la memoria del elemento pasado como argumento .
void			ft_lstdelone(t_list *lst, void (*del)(void*));
//Suprime y libera la memoria del elemento pasado como parámetro y de todos los elementos siguientes.
void			ft_lstclear(t_list **lst, void (*del)(void *));
//Realiza una iteración sobre la lista lst y aplica la función f al contenido de cada elemento.
void			ft_lstiter(t_list *lst, void (*f)(void *));
/*Realiza una iteración sobre la lista lst y aplica la función f al contenido de cada elemento. Crea
una nueva lista que resulta de las aplicaciones sucesivas de f.*/
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
