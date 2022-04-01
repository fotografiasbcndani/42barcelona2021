char *ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    res = (char *)malloc(3);
    int i;
    int u;
    u = 0;
    i = 0;
    while (s1[i] != '\0')
    {
        res[i] = s1[i];
        i++;
    }
    while (s2[u] != '\0')
    {
        res[i] = s1[u];
        i++;
        u++;
    }
    return (res);
}