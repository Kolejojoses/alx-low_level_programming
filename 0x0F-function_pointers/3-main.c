#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main operation
 * @argc: argument count
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, calc;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = func(num1, num2);
	printf("%d\n", calc);
	return (0);
}
