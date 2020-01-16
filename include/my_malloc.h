/*
** EPITECH PROJECT, 2019
** my_malloc.h
** File description:
** header of my_malloc.c
*/

#ifndef _MY_MALLOC_H_
#define _MY_MALLOC_H_

#include <pthread.h>
#include <stdbool.h>
#include <unistd.h>

typedef struct node_s {
    size_t mem_size;
    bool is_free;
    struct node_s *next;
    struct node_s *prev;
} node_t;

struct db_llist_t {    
    node_t *head;
    node_t *tail;
};

extern struct db_llist_t db_llist;

void free(void *ptr);
void *malloc(size_t size);
void *realloc(void *ptr, size_t size);
void *calloc(size_t nmemb, size_t size);
void show_alloc_mem(void);

#endif /* _MY_MALLOC_H_ */
