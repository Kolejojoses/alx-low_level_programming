#include "main.h"

/**
*_strlen_recursion - string length
*@s: string
*Return: string length
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
*palindrome - checks for similarities
*@s: string
*@len: string length
*@i: iteration
*Return: 1 (success)
*/

int palindrome(char *s, int len, int i)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (len - 1 <= i)
		return (1);
	return (palindrome(s, len - 1, i + 1));
}

/**
*is_palindrome - similarities
*@s: string
*Return: 1 (success)
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome(s, _strlen_recursion(s), 0));
}
