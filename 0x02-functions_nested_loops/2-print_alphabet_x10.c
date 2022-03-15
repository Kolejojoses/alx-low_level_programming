#include<stdlib.h>
#include<stdio.h>
#include "main.h"

/**
*print_alphabet_x10 - prints 10 times the alphabet
*
*Return: 0 (success)
*/

void print_alphabet_x10(void)
{
	char alphabet;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
