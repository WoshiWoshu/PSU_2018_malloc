/*
** EPITECH PROJECT, 2019
** my_malloc
** File description:
** roud_four.c
*/

#include "my_malloc.h"

int round_four(int size)
{
    return ((size % 4 != 0 ? size + 4 - (size % 4) : size));
}
