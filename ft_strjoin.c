/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:08:06 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/02 21:36:11 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    res = (char *)calloc(ft_strlen(s1)+ft_strlen(s2)+1, sizeof(char));
    if(res==NULL)
	{
		return(NULL);
	}
	ft_strlcpy(res,s1,ft_strlen(s1)+1);
	ft_strlcat(res,s2,ft_strlen(s1)+ft_strlen(s2)+1);
	return (res);
}
