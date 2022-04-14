#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - function that prints all
 * @format: types of argument
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *ptr;
	char *sep = "";

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					ptr = va_arg(args, char *);
					if (ptr == NULL)
						ptr = "(nil)";
					printf("%s%s", sep, ptr);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
