/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:24:52 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/02 16:44:23 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstl;
	size_t	e;
	size_t	srcl;
	size_t	dstl2;

	srcl = ft_strlen(src);
	dstl = ft_strlen(dst);
	dstl2 = ft_strlen(dst);
	e = 0;
	if (size == 0)
		return (size + srcl);
	while (src[e] && dstl < size - 1)
	{
		dst[dstl] = src[e];
		dstl++;
		e++;
	}
	dst[dstl] = '\0';
	if (size < dstl)
		return (size + srcl);
	else
		return (srcl + dstl2);
}
