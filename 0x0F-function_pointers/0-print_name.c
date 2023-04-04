#include "function_pointers.h"

/**
 * print_name - calls a function to print a name
 *
 * @name: the name to print
 * @f: a pointer to a function that takes a char pointer and returns void
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
