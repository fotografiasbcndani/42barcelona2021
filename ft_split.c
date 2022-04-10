/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:46:42 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/10 20:53:11 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_wcounter(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count++;
		}
		i++;
	}
	return (count+1);
}

char **ft_split(char const *s, char c)
{
   	char	**res;
	int		i;
	int		y;
	int		tmp;
	int		wc;

	i = 0;
	wc = ft_wcounter(s,c);
	res = (char **)calloc(wc,wc)
	if(res == NULL)
		return (NULL);
	y = 0;
	while (s[i] != '\0')
	{
		if ( s[i] == c)
		{
			res[y] = ft_substr(s,tmp,i-tmp);
			tmp = i + 1;
			y++;
		}
		i++;
	}
    return (res);
}

int main ()
{
    int		i;
    char	*s = "olol  ry    tut  ";
   	char	**c;

    c = ft_split(s, ' ');

    for (i = 0; c[i] ; i++)
        printf("string #%d: %s\n", i, c[i]);

    return 0;
}
