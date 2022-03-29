/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:24:52 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/29 23:49:11 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t size)
{

	int srcl;
	int dstl;
	int last;
	int y;
	int e;
	dstl = strlen(dst);
	srcl = strlen(src);
	last=dstl;
	e=0;
	y = (int) size;
	if(size == 0)
		return(srcl);

	while((src[e] != '\0')&&(y>0))
	{
			dst[last]= src[e];
			e++;
			last++;
			y--;


			if(last == (int) size)
				break;
	}
	dst[last] = '\0';		
	return(dstl+srcl);	
} 
