#include"main.h"

/**
 * _pow_recursion - computes the power of a function.
 * @x: the number acting as base
 * @y: the power
 * return: (-1)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (_pow_recursion(x,y - 1));
	}
}
