#include<stdio.h>
/**
 * main -Entry point
 *
 * description  prints all single digit numbers of base 10 starting from
 *
 * return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
