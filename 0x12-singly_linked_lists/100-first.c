#include <stdio.h>

/**
 * before_main - prints a message before the main function is executed
 *
 * Description: This function is executed automatically before the main
 *              function is executed. It prints the message "You're beat!
 *              and yet, you must allow,\nI bore my house upon my back!\n"
 *              to the standard output.
 */
void before_main(void) __attribute__((constructor));

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
