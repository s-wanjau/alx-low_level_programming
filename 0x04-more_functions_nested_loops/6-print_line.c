#include "main.h"

/**
 * print_line - printing lines
 * @a: number of times
 *
 * Return: void
 */


void print_line(int a)
{
	int  i;

	for (i = 0; i < a; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

