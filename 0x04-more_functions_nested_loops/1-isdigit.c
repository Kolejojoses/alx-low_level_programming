#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/*
*_isdigit - checks for a digit
*@c: Notation
*Return: 1 else 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
