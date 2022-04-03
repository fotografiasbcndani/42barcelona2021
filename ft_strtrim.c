/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:46:07 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/03 22:42:53 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*char *ft_strtrim(char const *s1, char const *set)
{
    char            *res;
    unsigned long   setlen;
    setlen=strlen(set)-1;
    if (2*setlen > ft_strlen(s1)-2*setlen)
        return(NULL);   
    res=(char *)calloc(ft_strlen(s1)-ft_strlen(set),ft_strlen(s1)-2*setlen+2);
    if (res==NULL)
        return(NULL);
    ft_strlcpy(res,s1+setlen,ft_strlen(s1)-2*setlen+1);
    return(res);
}
*/
char *ft_moveleft(char	*s,int index)
{
				int z;
				z=index;
				while(s[z])
				{
				s[z] = s[z+1];
				z++;
				}
				return(s);
}
char *ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int i;
	int u;
	int len;
	i=0;
	len= ft_strlen(s1)-1;
	while(s1[i])
	{
		u=0;
		if(s1[i]==s1[i+1] || (s1[i] ==set[u] && s1[i+1]==set[u+1])
				|| (s1[i] ==set[u+1] && s1[i+1]==set[u]))
		{
			while(s1[i]==set[u] && set[u] != '\0')
			{
				ft_moveleft((char	*)s1,i);
				i=0;
				u++;
			}
		}
	i++;
	}
	res=(char *)calloc(ft_strlen(s1),ft_strlen(s1)+1);
    if (res==NULL)
        return(NULL);
	ft_strlcpy(res,s1,len);
	return(res);
}
