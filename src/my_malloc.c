/*
** EPITECH PROJECT, 2019
** my_malloc
** File description:
** simple malloc function
*/

#include "my_malloc.h"

struct db_llist_t db_llist;
static bool init_ptr = true;

static node_t *get_free_node(size_t size)
{
    for (node_t *tmp = db_llist.head; tmp != NULL; tmp = tmp->next)
        if (tmp->mem_size >= size && tmp->is_free == true)
            return (tmp);
    return (NULL);
}

static void append_node(node_t **node, size_t size)
{
    node_t *tmp = *node;

    tmp->mem_size = size;
    tmp->is_free = false;
    tmp->next = NULL;
    if (!(db_llist.head) && !(db_llist.tail)) {
        tmp->prev = NULL;
        db_llist.head = tmp;
    } else {
        tmp->prev = db_llist.tail;
        db_llist.tail->next = tmp;
    }
    db_llist.tail = tmp;
}

void *malloc(size_t size)
{
    size_t overall_size = sizeof(node_t) + size;
    void *mem_block = sbrk(0);
    node_t *node = get_free_node(size);

    if (init_ptr == true) {
        db_llist.head = NULL;
        db_llist.tail = NULL;
        init_ptr = false;
    }
    if (!size || mem_block == (void *)-1)
        return (NULL);
    if (node) {
        node->is_free = false;
        return (void *)(node + sizeof(node_t));
    }
    node = (node_t *)mem_block;
    brk(mem_block + overall_size);
    append_node(&node, size);
    return (void *)(node + sizeof(node_t));
}
