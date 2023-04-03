#include<stdio.h>
#include"main.h"

/**
 * _memset - fill a block of memory with a particular value.
 * @s: first constant
 * @b: second constant
 * @n: byte
 * Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
