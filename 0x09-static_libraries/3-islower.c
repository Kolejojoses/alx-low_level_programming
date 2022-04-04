#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
*_islower - checks for lowercase character
*@c: Parameter
*Return: 1 if c is lowercase or 0 for uppercase
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
