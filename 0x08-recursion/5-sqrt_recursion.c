#include"main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root of a number.
 * @n: number that is to be square rooted
 * return: natural square of base number
 */
int _sqrt_recursion(int n)
{
	if (n * n / n == n)
	{
		return (n);
	}
	else if ( n * n / n < 0)
	{
		return (-1);
	}
}
