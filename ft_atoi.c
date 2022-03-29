/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:15:21 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/17 13:31:20 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_atoi(const char *str)
{
	int i;
	int res;
	i=0;
	res=0;
	while(str[i]!= '\0')
	{
		if((str[i]>=48)&&(str[i]<=57))
		{
			res= res * 10 + (str[i]-'0');
		}
		else
		{
			return(res);
		}
		i++;
	}
	return(res);
}
