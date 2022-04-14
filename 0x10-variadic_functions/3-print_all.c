#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - function that prints all
 * @separator: separates the numbers
 * @n: first integer
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *ptr;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, char));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, float));
					break;
				case 's':
					ptr = va_arg(args, char *);
					if (str == NULL)
						ptr = "(nil)";
					printf("%s", ptr);
					break;
				default:
					i++;
					continue;
			}
			i++;
		}
	printf("\n");
	va_end(args);
}
