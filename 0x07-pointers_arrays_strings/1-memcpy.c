#include<stdio.h>
#include"main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: original memory
 * @dest: the new memory
 * @n: bytes
 * Return: (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d = 0;

       while (d < n)
	{
		dest[d] = src[d];
		d++;
	}
	return (dest);
}
