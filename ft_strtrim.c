/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:46:07 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/03 21:04:53 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
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
