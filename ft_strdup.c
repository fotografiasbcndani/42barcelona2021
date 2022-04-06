/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 00:41:42 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/02 20:36:05 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		len;

	len = ft_strlen(s1) + 1;
	res = (char *)malloc(len);
	if (res == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_strlcpy(res, s1, len);
		return (res);
	}
}
