#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int largest_number(int a, int b, int c)
{
        int largest;

	if (a > b && b > a)
	{
		largest = a;
	}
			else if (b > c && b > a)
			{
				largest = b;
			}
					else if (c > b)
					{
						largest = c;
					}
	else
	{
		largest = b;
	}
        return (largest);
}
