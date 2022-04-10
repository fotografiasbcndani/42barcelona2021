/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:15:21 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/10 13:59:07 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	isempty(const char*str)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	res;

	n = 1;
	res = 0;
	i = isempty(str);
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		n = 0;
		i++;
	}
	while (ft_isdigit(str[i]) != 0)
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (n == 1)
		return (res);
	else
		return (res * -1);
}
