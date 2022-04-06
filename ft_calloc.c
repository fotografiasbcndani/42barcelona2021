/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:51:03 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/02 21:36:26 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	siz;

	siz = count * size;
	ptr = (char *)malloc(siz);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_bzero(ptr, siz);
		return (ptr);
	}
}
