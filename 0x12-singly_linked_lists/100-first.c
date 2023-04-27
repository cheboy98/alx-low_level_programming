#include <stdio.h>
#include "lists.h"
void premain(void) __attribute__ ((constructor));
/**
 * premain - Execute before main function
 *
 * Return: nothing
 */

void premain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
