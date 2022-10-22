#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: n is an integer
 *
 * Return: returns the given integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
