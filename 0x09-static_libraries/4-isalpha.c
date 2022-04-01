#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
*_isalpha - function that checks for alphabetic character
*@c: notation
*Return: 1 otherwise 0
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
