/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:47:00 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/02 21:47:03 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_itoa(int n)
{
    int     i;
    int     j;
    int    *res;
    j=1;
    i=0;
    if(n[i]=='+')
		i++;
	else if(n[i]=='-')
	{
		j=0;
		i++;
	}
    res=(int *)malloc(sizeof(int));
    if(res == NULL)
        return (NULL);
    while(n[i])
    {
        res = res*10+n[i];
        i++;
    }
    if(j==1)
        return(res*j);
    else
        return(res*-1);
}
