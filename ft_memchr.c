/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:49:34 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/17 15:06:14 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memchr(const void *str, int c, size_t n)
{
	unsigned int i;
	char* p;
	p = (char*) str;
	i = 0;
	while( i < n)
	{
		if(p[i] == c)
		{
			return ((void*)&p[i]);
		}
		i++;
	}
	return (NULL);
}
