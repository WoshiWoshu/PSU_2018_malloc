/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include "include/my_malloc.h"

int main(void)
{
    char *str = malloc(sizeof(char) * 8);

    str[0] = 'b';
    str[1] = 'o';
    str[2] = 'n';
    str[3] = 'j';
    str[4] = 'o';
    str[5] = 'u';
    str[6] = 'r';
    str[7] = '\0';
    realloc(str, 5);
    printf("%s\n", str);
    show_alloc_mem();
    free(str);
}
