#include "main.h"
/**
 *  _islower - function to print lowercase
 *@c: parameter to be printed
 *  Return: is 1 if is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 12)
		return (1);
	else
		return (0);
}

