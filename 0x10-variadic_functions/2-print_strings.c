#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include<stdarg.h>

/**
 * print_strings - new dog
 * @separator: the seprator
 * @n: the owner
 * Return: the dog
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s != NULL)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");

}
