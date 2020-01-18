# PSU_2018_malloc
Second year project in C in which the goal was to re-code the "malloc", "realloc" and "free" functions.
The program generates a shared dynamic library to re-write in runtime the functions mentioned earlier.
Memory management is handled with the help of a double linked list.
Additionally "show_alloc_mem()" function displays the status of the allocated area on the screen with the addresses.
There is also a main.c that test the functions.

USAGE : 

    Make
    gcc -L./ main.c -lmy_malloc
