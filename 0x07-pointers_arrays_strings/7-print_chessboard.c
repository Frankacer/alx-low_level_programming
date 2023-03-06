#include "main.h"

/**
 * print_chessboard - Prints a chessboard to the console.
 * @a: A pointer to an 8x8 2D array of characters representing the chessboard.
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
			_putchar(a[row][col]);
		_putchar('\n');
	}
}
