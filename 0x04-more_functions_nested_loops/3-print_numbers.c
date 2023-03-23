#include "main.h"

/**
 * print_numbers - Prints 0 to 9
 *
 * Return: The numbers 0 - 9
 */
void print_numbers(void)
{
		int i = '0';

		while (i <= '9')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
}
