#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    int leng;
    leng = (int)len;
    i = 0;
    char *res;
    res = (char *)malloc(sizeof(char));
    while (i != leng)
    {
        res[i] = s[start + i];
        i++;
    }
    return (res);
}
