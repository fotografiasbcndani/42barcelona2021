/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:47:00 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/11 17:04:51 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_nmb(int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_filler(char *s, int n, int count)
{
	while (n > 0)
	{
		s[count - 1] = n % 10 + '0';
		n = n / 10;
		count--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		neg;
	int		count;

	count = 0;
	neg = 0;
	if (n == 0)
		return ("0");
	if (!n)
		return (NULL);
	if (n < 0)
	{
		n = -1 * n;
		neg = 1;
		count = 1;
	}
	count += ft_nmb(n);
	res = (char *) calloc(count + 1, count + 1);
	if (res == NULL)
		return (NULL);
	res = ft_filler(res, n, count);
	if (neg == 1)
		res[0] = '-';
	return (res);
}
