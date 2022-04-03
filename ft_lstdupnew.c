#include "libft.h"
t_list	*ft_lstdupnew(void *content)
{
	t_list	*res;

	res = (t_list *)malloc(sizeof(t_list));
	if (res==NULL)
		return (NULL);
    //le asigno el contenido duplicado con strdup a la lista
	res->content = ft_strdup(content);
    //si no se agrega liberamos memoria y devolvemos nulo
	if (!res->content)
	{
		free(res);
		return (NULL);
	}
    //colocamos un 0 en el ultimo dato de la lista antes de retornarla
	res->next = 0;
	return (res);
}