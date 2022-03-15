#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
*print_alphabet - a function that prints the alphabet
*
*Return: 0 (success)
*/

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
