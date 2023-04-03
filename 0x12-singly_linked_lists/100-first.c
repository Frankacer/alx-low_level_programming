#include <stdio.h>

/**
 * print_message - Prints a message before the main function is executed
 *
 * Return: void
 */
void print_message(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	print_message();
	/* Rest of the code goes here */
	return (0);
}
