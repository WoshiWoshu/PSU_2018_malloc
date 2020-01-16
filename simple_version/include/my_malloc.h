/*
** EPITECH PROJECT, 2019
** my_malloc.h
** File description:
** header of my_malloc.c
*/

#ifndef _MY_MALLOC_H_
#define _MY_MALLOC_H_

#include <stddef.h>

typedef struct block {
    size_t size;
    struct block *next;
} *block_t;

extern void free(void *ptr);
extern void *malloc(size_t size);
extern void *realloc(void *ptr, size_t size);
extern int round_four(int size);

#endif /* _MY_MALLOC_H_ */
