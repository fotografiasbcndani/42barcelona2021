/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:30:47 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/29 20:43:13 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void ft_bzero(void *dst, size_t n)
{
	unsigned long i;
	char *dt;
	dt = (char *)dst;
	i = 0;

	if (n != 0)
	{
		while (i <= n)
		{
			dt[i] = 0;
			i++;
		}
		dt[i] = '\0';
		dst = (void *)dt;
	}
}
