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
	if ('c' <= 'A' && 'a' >= 'Z')
		return (0);
	else
		return (1);
}
