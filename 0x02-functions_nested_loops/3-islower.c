#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
*_islower -  checks for lowercase character 
*
*Return: 0 (success)
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
