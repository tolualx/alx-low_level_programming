#include "main.h"

/**
 * swap_int - that swaps the value of 2 integars
 * @a: first variable to be swapped
 * @b:second variable to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
