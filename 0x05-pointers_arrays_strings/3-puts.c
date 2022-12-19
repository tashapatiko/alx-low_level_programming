#include "main.h"

/**
 * _puts - prints a string, followed by anew line, to stdout
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\10')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
