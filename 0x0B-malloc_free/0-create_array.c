#include<stdio.h>
#include"main.h"
#include<stdlib.h>

/**
 *  *create_array - a function that creates an array of chars
 *  @size: the array size
 *  @c: a character
 *
 *  Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)

{

	char *t;
	unsigned int i;

	t = malloc(sizeof(char) * size);

	if (size == 0 || t == NULL)
		return (NULL);

	for (i = 0; i < size; i++)

		t[i] = c;
	return (t);
}
