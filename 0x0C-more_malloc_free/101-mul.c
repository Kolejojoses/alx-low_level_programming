#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints
 * @argc: arguments number
 * @argv: arguments entered
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int *num1, *num2, *ptr, len1, len2, len;
	char *s1, *s2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		exit (98);
	}

	s1 = argv[1];
	s2 = argv[2];
	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2;
	ptr = (int *)malloc((len + 1) * sizeof(int));
	num1 = atoi(s1);
	num2 = atoi(s2);
	ptr = num1 * num2;

	printf("%d\n", *ptr);
	free(ptr);
	return (0);
}
