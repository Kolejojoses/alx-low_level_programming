#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
*print_last_digit - a function that prints the last digit of a number
*@b: notation
*Return: last digit
*/

int print_last_digit(int b)
{
	return (b % 10 + '0');
}
