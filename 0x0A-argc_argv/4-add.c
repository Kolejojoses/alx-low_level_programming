#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *checker - checks for numbers
 *@s: string
 *Return: 1
 */

int checker(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - prints
 * @argc: arguments number
 * @argv: arguments entered
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, k;

	for (i = 1; i < argc; i++)
	{
		if (checker(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		j = atoi(argv[i]);
		if (j >= 0)
		{
			k = j + k;
		}
	}
	printf("%d\n", k);
	return (0);
}
