#include "main.h"

/**
*_pow_recursion - pow function
*@x: main number
*@y: power
*Return: result
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (y * _pow_recursion(x, y - 1));
}
