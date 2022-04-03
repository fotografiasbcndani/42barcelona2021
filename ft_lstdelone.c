#include "libft.h"
void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    //asignamos la funcion del al elemento de la lista y la liberamos
    (del)(lst->content);
	free(lst);
}