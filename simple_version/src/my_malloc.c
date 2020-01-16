/*
** EPITECH PROJECT, 2019
** my_malloc
** File description:
** simple malloc function
*/

#include <unistd.h>
#include "my_malloc.h"

void *malloc(size_t size)
{
    block_t block;

    if (!size)
        return (NULL);
    if ((block = sbrk(sizeof(block_t) + round_four(size))) == (void *) - 1)
        return (NULL);
    return (block);
}
