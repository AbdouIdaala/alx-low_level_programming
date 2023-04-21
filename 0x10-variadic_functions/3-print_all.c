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
	int len = strlen(format);
	int i;
	unsigned int j;
	char ifcs[] = "ifcs";

	va_start(args, format);
	i = 0;
	while (i < len)
	{
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
				if (str == NULL)
				{
					printf("(nil)");
					return (1);
				}
				printf("%s", va_arg(args, char *));
				break;
			default:
				break;
		}
		j = 0;
		while (j < strlen(ifcs))
		{
			if ((ifcs[j] == format[i]) && i < (len - 1))
				printf(", ");
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
