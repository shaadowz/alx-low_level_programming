#include "main.h"

/**
 * _abs - compute the absolute  value.
 *
 * @a: to be checked
 * Return: Always 0.
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = (-1) * a;
	}
	return (a);
}
