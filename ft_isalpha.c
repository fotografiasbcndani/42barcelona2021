/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 03:13:02 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/17 14:37:49 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_isalpha(int c)
{
	if((c >= 'A') &&(c <= 'Z'))
	{
		return(1);
	}
	else if((c >= 'a') && (c <= 'z'))
	{
		return(2);
	}
	else
	{
		return(0);
	}
}
