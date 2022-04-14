#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: separates the numbers
 * @n: first integer
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			return;
		if (i < n - 1)
		{
			printf("%d%s", va_arg(args, int), separator);
		}
		else if (i == n - 1)
		{
			printf("%d\n", va_arg(args, int));
		}
	}
	va_end(args);
}
