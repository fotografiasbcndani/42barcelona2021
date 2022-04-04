#include "libft.h"
t_list *ft_lstnew(void *content)
{
    t_list *res;

    res=(t_list *)malloc(sizeof(t_list));
    if(res==NULL)
    {
        return(NULL);
    }
        //asignamos a la lista los contenidos
        res->content = content;
        //finalizamos la lista con un 0 y la retornamos
	res->next = 0;
	return (res);
}