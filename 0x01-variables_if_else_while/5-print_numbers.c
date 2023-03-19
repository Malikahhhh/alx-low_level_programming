#include<stdio.h>
/**
 * main -Entry point
 *
 * description  'print numbers of base 10'
 *
 * return: Always (0) Success
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	/**
        * Return value
        * 0 - success
        * non-zero - error
        */
	return (0);
}
