#include"main.h"

/**
 * is_prime_number -  validates whether a number is aprime number.
 * @n: number that will be tested
 * return: 1 if number is prime otherwise 0.
 */
int is_prime_number(int n)
{
	if ( n % n > 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
