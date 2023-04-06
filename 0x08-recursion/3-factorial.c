#include"main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: the integer
 * Return: (-1)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n + factorial(n - 1));
	}
}
