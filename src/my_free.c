/*
** EPITECH PROJECT, 2019
** my_malloc
** File description:
** function that free a pointer
*/

#include "my_malloc.h"

void free(void *ptr)
{
    node_t *pre_node = (node_t *)ptr - sizeof(node_t);
    node_t *tmp = db_llist.tail->prev;

    if (!ptr)
        return;
    if ((char *)ptr + pre_node->mem_size == sbrk(0)) {
        if (db_llist.head == db_llist.tail) {
            db_llist.head = NULL;
            db_llist.tail = NULL;
        } else {
            tmp->next = NULL;
            db_llist.tail = tmp;
        }
        brk(ptr - sizeof(node_t));
        return;
    }
    pre_node->is_free = true;
}
