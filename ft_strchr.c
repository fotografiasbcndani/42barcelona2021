/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:11:28 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/02 16:43:50 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strchr(const char *str, int c)
{
	int strl;
	strl = ft_strlen(str);
	int i;
	while (c == '\0')
	{
			return((char*) &str[strl]);
	}

	i = 0;
	while (str[i]) 
	{
		if(str[i]!= c)
		{
			i++;
		}
		else
		{
			return ((char *) &str[i]);
		}
	}
	if(str[i] == str[strl])
		{
			return(NULL);
		}
	return((char*) &str[i]);
}
