#include "main.h"

/**
 *_puts_recursion - function that prints a string
 *@s: string parameter
 */

void _puts_recursion(char *s)
{		
	s = "come\0";

	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}
	_putchar(*s);
	s++;
	 _puts_recursion(s);
}
