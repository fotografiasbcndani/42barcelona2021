#include "libft.h"
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list	*i;

	if (!lst || !f)
    //si no exiten ni la lista ni f retorna nulo
		return NULL;
	i = lst;
    //le asigno la lista a mi iterador
	while (i)
    //mientras el iterador pueda iterar se le aplicara la funcion f a cada elemento de la lista dentro del iterador
	{
		(*f)(i->content);
		i = i->next;
        free(i);
}