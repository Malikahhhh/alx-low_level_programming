#include<stdio.h>
#include<unistd.h>
/**
 * main - entry
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Kirpar, 2015-10-19\n", 59);
	return (1);
}