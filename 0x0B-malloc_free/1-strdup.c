#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: the string
 * Return: NULL
 */
char *_strdup(char *str)
{
        char *z;
        int i = 0;
        int m = 0;

        if (str == NULL)
                return (NULL);

        while (str[i] != '\0')
                i++;
        z = malloc(sizeof(char) * (i + 1));

        if (z == NULL)
                return (NULL);

        for (m = 0; str[m]; m++)

                z[m] = str[m];
        return (z);
}
