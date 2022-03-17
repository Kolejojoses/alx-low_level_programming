#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
*_isupper - checks for uppercase character
*@c: Notation
*Return: 1 else 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
