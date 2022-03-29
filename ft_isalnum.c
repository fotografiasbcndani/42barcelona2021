/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:15:58 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/17 14:18:30 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_isalnum(int c)
{
	if(((c >= 'a') && (c <= 'z' ))|| ((c <= 'Z') && (c >= 'A'))
			||((c >= '0') && (c<= '9')))
		return(1);
	else
	{
		return(0);
	}
}