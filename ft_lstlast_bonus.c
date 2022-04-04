/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 20:15:07 by dchavez-          #+#    #+#             */
/*   Updated: 2022/04/03 20:16:17 by dchavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{
    while (lst)
    {
        // buscamos con next el ultimo elemento mientras se pueda recorrer la lista
        if (lst->next == NULL)
        {
            return (lst);
        }
        // mientras no se cumpla, seguimos recorriendo
        lst = lst->next;
    }
    return (lst);
}
