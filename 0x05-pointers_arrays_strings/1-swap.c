#include <stdio.h>
#include "main.h"

/**
*swap_int - a function that swaps the values of two integers
*@a: first number
*@b: second number
*Return: swappped numbers
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}
