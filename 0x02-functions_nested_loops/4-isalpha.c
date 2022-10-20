#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 *
 * @c: c is an ascii character
 *
 * Return: returns 1 if true, else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
