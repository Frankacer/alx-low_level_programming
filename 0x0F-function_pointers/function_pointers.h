#ifndef MAIN_H
#define MAIN_H

#ifndef NULL
#define NULL ((void *)0)

#endif

int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
void print_opcodes(char *addr, int size);
void print_name(char *name, void (*f)(char *));

#endif
