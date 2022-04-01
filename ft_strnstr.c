/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:42:42 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/17 13:55:04 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long u;
	int e;
	char *y;
	u = 0;
	e = 0;
	if (needle[u] == '\0')
	{
		return ((char *)haystack);
	}
	while (u < len)
	{
		if (haystack[u] == needle[e])
		{
			y = (char *)haystack;
			return (&y[u]);
		}
		else
		{
			u++;
		}
	}

	return (NULL);
}
