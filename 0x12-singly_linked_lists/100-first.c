#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - prints string before and after functio
 *        execuited
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
