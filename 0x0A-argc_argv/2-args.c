#include <stdio.h>

/**
 * main - Entry point. Prints all arguments received, one per line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the program arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}
