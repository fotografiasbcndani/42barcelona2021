/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:22:57 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/02 17:27:20 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	i = 1;
	while (i > 0)
	{
		if (str[len] != c)
		{
			len--;
		}
		else if (len < 0)
		{
			i--;
		}
		else if (str[len] == c)
		{
			return ((char *) &str[len]);
		}
		else
		{
			return (NULL);
		}
	}
	return (NULL);
}
