# PSU_2018_malloc
Second year project in C in which the goal is to re-code the "malloc", "realloc" and "free" functions. The program generate a shared dynamic library and so re-write on runtime the functions mentioned earlier.
Additionally "show_alloc_mem()" function, it displays the status of the allocated area on the screen (to be inserted into the library).
It displays the addresses in the following order and there is a main.c that test the functions.

Using : 

1) Make
3) gcc -L./ main.c -lmy_malloc
