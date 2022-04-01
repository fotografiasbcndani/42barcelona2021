/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:22:57 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/17 14:49:30 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strrchr(const char *str, int c)
{
	int i;
	int len;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	i = 0;
	while (str[len] != str[i])
	{
		if (str[len] != c)
		{
			len--;
		}
		else
		{
			return ((char *)&str[len]);
		}
	}
	return (NULL);
}
