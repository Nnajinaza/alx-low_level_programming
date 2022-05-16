#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
 * print_strings - function that prints string
 * @separator: a pointer to string
 * @n: last parameter
 * Return: Always the string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *j;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i < n && separator)
		{
			j = va_arg(args, char *);
			printf("%s", j);
			printf("%s", separator);
		}
		else if (i > n && separator)
		{
			break;
		}
	}
	printf("\n");
	va_end(args);
}
