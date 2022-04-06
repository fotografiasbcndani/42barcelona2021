/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 20:14:45 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/03 20:14:48 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*i;

	if (*lst)
	{
// a mi iterador le asigno el ultimo lugar de la lista y se asigno new allí
		i = ft_lstlast(*lst);
		i -> next = new;
	}
	else
	{
		*lst = new;
	}
}
