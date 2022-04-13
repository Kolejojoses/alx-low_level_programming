#include "3-calc.h"

/**
 *op_add - adds to integers
 *@a: first integer
 *@b: second integer
 *Return: sum if the integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - function that substracts two integers
 *@a: first ineger
 *@b: second integer
 *Return: subtracts a from b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two integers
 *@a: fist integer
 *@b: second integer
 *Return: mulpication of two integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - function that divides two integers
 *@a: fist integer
 *@b: second integer
 *Return: division of two integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - function for modulus of two numbers
 *@a: fist integer
 *@b: second integer
 *Return: modulus of two integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
