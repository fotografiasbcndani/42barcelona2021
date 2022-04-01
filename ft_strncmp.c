/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:35:10 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/17 14:38:37 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int c;
	unsigned int y;
	unsigned char *st1;
	unsigned char *st2;

	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	c = 0;
	y = 0;
	if (n == 0)
	{
		return (0);
	}
	while (st1[c] == st2[c])
	{
		if (y <= n)
		{
			write(1, &st1[c], 1);
			write(1, &st2[c], 1);
			write(1, "\n", 1);
			y++;
		}
		c++;
	}
	return (st1[c] - st2[c]);
}
