/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 09:24:02 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/29 22:50:06 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void * ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	char* p;
	p = (char*) src;
	if(!dest && !src)
	{
		return(NULL);
	}
	i= (int) n-1;
	if (dest>src)
	{
		while(i>=0)
			{
		*(char*)(dest+i) = *(char *)(p+i);
		i--;
		}
	}
	else
	{
		ft_memcpy(dest,src,n);
	}
	return(dest);
}
