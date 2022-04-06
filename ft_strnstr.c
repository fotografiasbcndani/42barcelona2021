/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:42:42 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/02 18:34:45 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	u;
	size_t			needl;
	char			*y;

	needl = ft_strlen(needle) - 1;
	u = 0;
	if (haystack[u] == '\0')
	{
		return (NULL);
	}
	if (needle[u] == '\0')
	{
		return ((char *)haystack);
	}
	while (u < len - needl && len > 0)
	{
		if (haystack[u] != needle[0])
		{
			u++;
		}
		else
		{
			if (haystack[u + needl] == needle[needl] && u + needl < len)
			{
				y = (char *) haystack;
				return (&y[u]);
			}
			else
			{
				return (NULL);
			}
		}
		return (NULL);
	}
	y = (char *) haystack;
	return (&y[u]);
}