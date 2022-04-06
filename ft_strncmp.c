/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:35:10 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/02 17:54:56 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				c;
	unsigned int	y;
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *) s1;
	st2 = (unsigned char *) s2;
	c = 0;
	y = 0;
	if (n == 0)
	{
		return (0);
	}
	while (st1[c] == st2[c] && st1[c] != '\0' && st2[c] != '\0')
	{
		if (y < n - 1)
		{
			y++;
		}
		c++;
	}
	return (st1[y] - st2[y]);
}
