/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 00:41:42 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/17 13:41:01 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char * ft_strdup(const char *s1)
{
	char * res;
	int i;
	int len;
	i=0;
	len =0 ;
	while (s1[i] != '\0')
	{
		len++;
		i++;
	}
	res = malloc(len);
	i=0;
	while (s1[i] != '\0')
	{
		res[i]=s1[i];
		i++;
	}
return (res);
}
