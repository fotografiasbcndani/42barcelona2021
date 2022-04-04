/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:36:15 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/02 21:04:25 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
	size_t  slen;
	slen = ft_strlen(s);
	if(start>slen)
		start = slen;
	if(len>slen-start)
		len=slen-start;
    i=0;
    char *res;
    res = (char *)malloc((len+1) *sizeof(char));
	if(res==NULL)
    {
		return(NULL);	
    }
    while (i!=len)
    {
        res[i] = s[start + i];
        i++;
    }
	res[i]='\0';
    return(res);
}
