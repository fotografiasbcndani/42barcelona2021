#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *i;

    if (!del || !*lst || !lst)
        return NULL;
    while (lst && *lst)
    {
        i = (*lst)->next;
        //mientras itero voy borrando cada fila de la tabla con delone
        ft_lstdelone(*lst, del);
        *lst = i;
    }
}