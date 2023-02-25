#include <stdio.h>

/**
 * main - prints all the possible combinations of two 2-digit numbers
 * Return: 0 Always
 */

int main(void)
{
int i, j, k, l, num1, num2;

for (i = 0; i < 10; i++) /* Generates first digit of num1 */
{
	for (j = 0; j < 10; j++) /* Generates second digit of num1 */
	{
		num1 = (i * 10) + j;
		for (k = 0; k < 10; k++) /* Generates 1st digit of num2 */
		{
			for (l = 0; l < 10; l++) /* Generates 2nd digit of num2 */
			{
				num2 = (k * 10) + l;

				if (num2 > num1) /* To ensure it's a combination, order is not important */
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);

/* Print comma and space after each pair but a newline after the last pair */
					if (!(i == 9 && j == 8 && k == 9 && l == 9))
					{
						putchar(',');
						putchar(' ');
					}
					else
					{
						putchar('\n');
					}
				}
			}
		}
	}
}

return (0);

}
