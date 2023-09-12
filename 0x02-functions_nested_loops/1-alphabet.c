#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase
 * Return: 0 
 */

void display_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar("\n");

	return 0;
}
