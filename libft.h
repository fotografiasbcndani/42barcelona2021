/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:50:20 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/29 22:50:47 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_isalpha(int c);
int 	ft_isdigit(int c);
int 	ft_isalnum(int c);
int 	ft_isascii(int a);
int 	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero( void *s,size_t n );
void 	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	ft_strlcat(char *destination, const char *source, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int 	ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int 	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int 	ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
void	*ft_memmove(void *dst, const void *src, size_t len);
#endif