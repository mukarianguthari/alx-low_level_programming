#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The characterto print
 *
 * Return: 1 on success
 * In case of an error, -1 is returned and error no is set as appropriate
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

