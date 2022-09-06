/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:46:07 by dchavez-          #+#    #+#             */
/*   Updated: 2022/09/06 15:07:14 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		o;
	int		len;
	char	*res;

	i = 0;
	o = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	while (o > 0 && ft_strchr(set, s1[o]))
	{
		o --;
	}
	len = o - i + 1;
	res = ft_substr(s1, i, len);
	return (res);
}
