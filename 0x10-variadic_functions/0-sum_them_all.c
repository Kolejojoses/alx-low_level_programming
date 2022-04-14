#include <stdarg.h>

/**
 * sum_them_all - function that sums numbers
 * @n: first integer
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	sum = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(args, int);
		}
	}
	va_end(args);
	return (sum);
}
