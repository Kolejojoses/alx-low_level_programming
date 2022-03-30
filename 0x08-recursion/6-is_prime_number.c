#include "main.h"

/**
*prime - finds prime
*@n: number
*@i: iteration
*Return: 1 (success)
*/

int prime(int n, int i)
{
	if (n % i == 0 && i < n)
		return (0);
	else if (n % i != 0 && i < n)
		return (prime(n, i + 1));
	return (1);
}

/**
*is_prime_number - prime
*@n: number
*Return: prime (n, i)
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime(n, 2));
}
