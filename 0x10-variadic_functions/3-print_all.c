#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints anything(any data type)
 * @format: pointer to string of data format types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, sep;
	char *str;

	va_start(args, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		sep = 0;
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				sep = 1;
				break;
		}
		if (i < (strlen(format) - 1) && sep != 1)
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
