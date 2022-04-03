#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{
    t_list res;
    while (lst)
    {
        // buscamos con next el ultimo elemento mientras se pueda recorrer la lista
        if (lst->next == 0)
            return (lst);
        // mientras no se cumpla, seguimos recorriendo
        lst = lst->next;
    }
    return (lst);
}