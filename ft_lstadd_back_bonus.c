#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *i;

    // verifico que existan tanto el new como la lista a manipular
    if (!new || !lst)
        return NULL;
    if (*lst)
    {
        // a mi iterador le asigno el ultimo lugar de la lista y se asigno new allí
        i = ft_lstlast(*lst);
        i->next = new;
    }
    else
        *lst = new;
}