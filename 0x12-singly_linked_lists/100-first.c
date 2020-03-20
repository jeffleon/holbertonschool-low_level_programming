#include "lists.h"
/**
 * thisbeforeMain - function that prints You're beat! and yet, you must allow,
 *
 *
 * Return: 0
 */
void __attribute__((constructor)) thisbeforemain(void);

void thisbeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
