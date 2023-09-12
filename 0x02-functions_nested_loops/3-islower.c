#include "main.h"

/**
 * _islower - It checks for lowercase character
 *@C: The character is checked
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int x)
{
	if (x >= 97 && x <= 122)
	{
		return (1);
	}
	return (0);
}
