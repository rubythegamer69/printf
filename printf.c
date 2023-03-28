#include "main.h"



/**
 * _printchar - prints character
 *
 * Return: Nothing
 *
 */

void _printchar(void)
{
	_putchar(va_arg(id.args, int));
	id.count++;
}
/**
 * _printstr - prints str
 *
 * Return: Nothing
 *
 */

void _printstr(void)
{
	id.str = va_arg(id.args, char *);
	if (id.str == NULL)
		id.str = "(null)";
	else
	{
		id.j = 0;
		while (id.str[id.j] != '\0')
		{
			_putchar(id.str[id.j]);
			id.j++;
			id.count++;
		}
	}
}
