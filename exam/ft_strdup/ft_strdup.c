#include <stdlib.h>
char *ft_strdup(char *src)
{
    int i;
    int len;
    char *dest;

    len = 0;
    while(src[len])
        len++;

    dest = malloc(len + 1);
    if (!dest)
        return (NULL);

    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}