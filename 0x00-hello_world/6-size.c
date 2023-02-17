#include <stdio.h>
/**
 * main - prints size of data type
 * Return: 0 if succesful
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %Iu byte(s)\n", sizeof(int));
printf("Size of a long int: %Iu byte(s)\n", sizeof(long));
printf("Size of a long long int: %Iu byte(s)\n", sizeof(long long));
printf("Size of a  float: %Iu byte(s)\n", sizeof(float));
return (0);
}
