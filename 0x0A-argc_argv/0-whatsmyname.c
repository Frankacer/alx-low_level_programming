#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments provided
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This program prints the name of the program followed by a
 *              newline character. The name is obtained from the first element
 *              of the argv array, which is a string containing the name of
 *              the program as it was called.
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	/* Print the name of the program followed by a newline */
	printf("%s\n", argv[0]);

	return (0);
}
