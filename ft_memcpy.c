/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:35:10 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/29 20:51:31 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int i;
	char *dest;
	char *source;
	int len;
	len = (int)n - 1;
	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	while (len >= 0)
	{
		dest[i] = source[i];
		i++;
		len--;
	}
	dst = (void *restrict)dest;
	return (dst);
}
