#include<stdio.h>
#include"main.h"

/**
 * _strchr -  a function that locates a character in a string.
 * @c: the character
 * @s: the string
 * Return: NULL if the chatacter c is not found
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return ('\0');
}
