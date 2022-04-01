/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:05:19 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/17 15:17:43 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memset(void *str, int c, size_t n)
{
	int u;
	int len;
	len = (int)n - 1;
	char *p;
	p = (char *)str;
	u = 0;
	while (len >= 0)
	{
		p[u] = c;
		u++;
		len--;
	}
	str = (void *)p;
	return (str);
}
