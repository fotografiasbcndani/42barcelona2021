/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 20:16:26 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/03 20:26:54 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list	*i;
	t_list	*elem;
	t_list	*res;

	if (lst)
	{
		i = lst;
		res = ft_lstnew((*f)(i->content));
		if (res == NULL)
		{
			return (NULL);
		}
		i = i->next;
		while (i)
		{
			elem = ft_lstnew((*f)(i->content));
			if (elem == NULL)
			{
				ft_lstclear(&res, del);
				return (NULL);
			}
			ft_lstadd_back(&res, elem);
			i = i->next;
		}
		return (res);
	}
	return (NULL);
}
