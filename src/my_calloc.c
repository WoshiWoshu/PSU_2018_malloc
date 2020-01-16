/*
** EPITECH PROJECT, 2019
** my_malloc
** File description:
** function that allocate memory for an array of num elem
*/

#include "my_malloc.h"

void *my_memset(void *s, int c, size_t n)
{
    char *c_s = (char *)s;

    for (size_t i = 0; i < n; ++i)
        *(c_s + i) = (char)c;
    return (s);
}

void *calloc(size_t nmemb, size_t size)
{
    size_t t_size = nmemb * size;
    void *node = malloc(t_size);

    if (!nmemb || !size || !node)
        return (NULL);
    my_memset(node, 0, t_size);
    return (node);
}
