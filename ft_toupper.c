/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:41:28 by dchavez-          #+#    #+#             */
/*   Updated: 2022/03/17 14:20:55 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_toupper(int ch)
{
	if((ch >= 'a') && (ch <= 'z'))
		{
			ch -= 32;
		}
	return (ch);
}