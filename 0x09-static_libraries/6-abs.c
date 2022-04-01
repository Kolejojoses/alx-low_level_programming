#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
*_abs - absolute value of an integer
*@a: notation
*Return: absolute value
*/
int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (-a);
}
