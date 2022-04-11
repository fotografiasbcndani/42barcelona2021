/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:46:42 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/11 17:15:10 by dchavez-         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		y;
	int		tmp;
	int		wc;

	if (s == NULL)
		return (NULL);
	i = 0;
	wc = ft_wcounter(s, c);
	res = (char **) ft_calloc(sizeof(char) * wc + 1, sizeof(char) * wc + 1);
	if (res == NULL)
		return (NULL);
	y = 0;
	i = ft_indirun(s, c);
	tmp = i;
	while (s[i] && y < wc + 1)
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{	
				res[y] = ft_substr(s, tmp, i - tmp + 1);
				tmp = i + 1;
				y++;
		}
		i++;
		if (s[i] == c)
			tmp = i + 1;
	}
	return (res);
}
