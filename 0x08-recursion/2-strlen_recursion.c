#include "main.h"

/**
 *_strlen_recursion - function returning length of a string
 *@s: string to be measured
 *Return: length of a string
 */

int _strlen_recursion(char *s)
{
	int longint = 0;

	if (*s)
	{
		longint++;
		longint += _strlen_recursion(s + 1);
	}
	return (longint);
}
