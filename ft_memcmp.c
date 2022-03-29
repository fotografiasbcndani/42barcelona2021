/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:55:20 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/17 13:33:39 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned long	c;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *) str1;
	s2 = (unsigned char *) str2;
	c = 0;
	if (n == c)
	{
		return (0);
	}
	else {
		while(c < n)
		{
			if (s1[c] == s2[c])
			{
				c++;
			}
			else
			{
				return (s1[c] - s2[c]);
			}
		}
	}
	return (0);
}
