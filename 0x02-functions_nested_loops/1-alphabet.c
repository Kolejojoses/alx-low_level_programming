#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
*main - a function that prints the alphabet
*
*Return: 0 (success)
*/

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void);
{
	char alphabet;

	for (alphabet = a; alphabet <= z; alphabet++)
		_putchar(alphabet);
	_putchar(' ');
}
