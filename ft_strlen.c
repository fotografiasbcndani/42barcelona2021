/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:59:22 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/17 14:52:27 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
size_t ft_strlen(const char *s)
{
	int i;
	i = 0;
	unsigned long u;
	u = 0;
	while (s[i] != '\0')
	{
		u++;
		i++;
	}
	return (u);
}
