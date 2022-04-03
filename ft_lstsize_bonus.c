#include "libft.h"
int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while (lst)
    {
        // recorro la lista
        lst = lst->next;
        i++;
    }
    return (i);
}