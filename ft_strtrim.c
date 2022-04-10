/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:46:07 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/10 17:41:06 by dchavez-         ###   ########.fr       */
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
	o = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	while (o > 0 && ft_strchr(set, s1[o]))
	{
		o --;
	}
	len = o - i + 1;
	res = (char *)malloc((len) * sizeof(char));
	if (res == NULL)
		return (NULL);
	if (len <= 0)
		return (ft_calloc(1, 1));
	res[len] = '\0';
	res = ft_substr(s1, i, len);
	return (res);
}
