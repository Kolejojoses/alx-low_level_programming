#include "main.h"

/**
*_sqrt - recursice square root
*@n: number
*@i: iterator
*Return: square root
*/

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
*_sqrt_recursion - function for recursive square root
*@n: nnumber
*Return: _sqrt
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
