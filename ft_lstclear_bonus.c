/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 20:14:35 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/03 20:14:38 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;

	while (lst && *lst)
	{
		i = (*lst)-> next;
//mientras itero voy borrando cada fila de la tabla con delone
		ft_lstdelone(*lst, del);
		*lst = i;
	}
}
