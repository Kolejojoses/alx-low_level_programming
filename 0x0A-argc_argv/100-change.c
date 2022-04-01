#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints
 * @argc: arguments number
 * @argv: arguments entered
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, l;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	l = 0;

	if (i < 0)
	{
		printf("0\n");
	}
	else
	{
		for (j = 0; j < 5; j++)
		{
			while (i >= coin[j])
			{
				l++;
				i -= coin[j];
			}
		}
	}
	printf("%d\n", l);
	return (0);
}
