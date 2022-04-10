/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:42:42 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/10 13:51:53 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	u;
	char			*y;

	u = 0;
	if (haystack[u] == '\0')
		return (NULL);
	if (needle[u] == '\0')
		return ((char *)haystack);
	while (u < len - ft_strlen(needle) - 1 && len > 0)
	{
		if (haystack[u] != needle[0])
			u++;
		else
		{
			if (haystack[u + ft_strlen(needle) - 1] == needle[
					ft_strlen(needle) - 1] && u + ft_strlen(needle) - 1 < len)
			{
				y = (char *)haystack;
				return (&y[u]);
			}
			else
				return (NULL);
		}
	}
	return (NULL);
}
