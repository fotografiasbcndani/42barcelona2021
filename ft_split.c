/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:46:42 by dchavez-          #+#    #+#             */
/*   Updated: 2022/09/06 16:25:42 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_wcounter(char const *s, char c)
{
	int	i;
	int	count;
	int	w;

	i = 0;
	count = 0;
	w = 0;
	if (c != '\0')
		if (s[0] == c)
			i++;
	while (s[i])
	{
		if (s[i] != c && w == 0)
		{
			w = 1;
			count++;
		}
		else if (s[i] == c)
			w = 0;
		i++;
	}
	return (count);
}

int	ft_indirun(char const *s, char c)
{
	int	i;

	i = 0;
	if (c != '\0')
		if (s[0] == c)
			i++;
	while (s[i] == ' ')
	{
		i++;
	}
	return (i);
}

char	**ft_makecalloc(int wc)
{
	char	**res;

	res = (char **) ft_calloc(sizeof(char) * (wc + 1), wc + 1);
	if (res == NULL)
		return (NULL);
	return (res);
}

char	**ft_assignfree(char *r, int tmp, int i, int y)
{
	char	**res;

	res[y] = ft_substr(r, tmp, i - tmp + 1);
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		y;
	int		tmp;

	if (s == NULL)
		return (NULL);
	i = 0;
	res = ft_makecalloc(ft_wcounter(s, c));
	y = 0;
	i = ft_indirun(s, c);
	tmp = i;
	while (s[i] && y < ft_wcounter(s, c) + 1)
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			ft_assignfree(res, tmp, i, y);
			tmp = i + 1;
			y++;
		}
		i++;
		if (s[i] == c)
			tmp = i + 1;
	}
	return (res);
}
