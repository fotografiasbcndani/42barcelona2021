/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 20:14:25 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/03 20:14:30 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*i;

	i = lst;
//le asigno la lista a mi iterador
	while (i)
//mientras el iterador pueda iterar se le aplicara la funcion f a cada elemento de la lista dentro del iterador
	{
		(*f)(i -> content);
		i = i -> next;
		free (i);
	}
}
