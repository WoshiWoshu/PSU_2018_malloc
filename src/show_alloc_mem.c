/*
** EPITECH PROJECT, 2019
** my_malloc
** File description:
** show allocated memory function
*/

#include <stdio.h>
#include <stdlib.h>
#include "my_malloc.h"

void show_alloc_mem(void)
{
    node_t *node = db_llist.head;

    printf("break : %p\n", sbrk(0));
    while (node->next != NULL) {
        if (node->is_free == false) {
            printf("%p - %p : %li bytes\n", node,
            node + node->mem_size, node->mem_size + sizeof(node_t));
        }
        node = node->next;
    }
}
