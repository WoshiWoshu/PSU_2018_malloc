/*
** EPITECH PROJECT, 2019
** my_malloc
** File description:
** function that change the size of a memory block
*/

#include "my_malloc.h"

void *my_memcpy(void *dest, const void *src, size_t n)
{
    char *c_dest = (char *)dest;
    const char *c_src = (const char *)src;

    for (size_t i = 0; i < n; ++i)
        *(c_dest + i) = *(c_src + i);
    return (dest);
}

void *realloc(void *ptr, size_t size)
{
    node_t *pre_node = (node_t *)ptr - sizeof(node_t);
    void *new_mem = malloc(size);
    
    if (!ptr || !size)
        return (new_mem);
    if (pre_node->mem_size >= size)
        return (ptr);
    if (new_mem) {
        new_mem = my_memcpy(new_mem, ptr, pre_node->mem_size);
        free(ptr);
    }
    return (new_mem);
}
