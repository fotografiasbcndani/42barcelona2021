/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:51:03 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/17 13:39:38 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void * ft_calloc(size_t count, size_t size)
{
 char * ptr;
 size_t siz;

 siz = count * size;
 ptr = malloc(siz);
 if(ptr == NULL)
 {
	 return (NULL);
 }
 else
 {
	return(ptr);
 }
}
