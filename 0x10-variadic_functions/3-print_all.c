#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include<stdarg.h>

/**
 * print_all - new dog
 * @format: the seprator
 * Return: the dog
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";
	char c;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, (float)va_arg(args, double));
				break;
			case 's':
				{
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
				}
				break;
		}
		sep = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
