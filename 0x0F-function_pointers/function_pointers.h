#ifndef MAIN_H
#define MAIN_H

#define NULL ((void *)0)

typedef unsigned int size_t;

int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
void print_opcodes(char *addr, int size);
void print_name(char *name, void (*f)(char *));

#endif
