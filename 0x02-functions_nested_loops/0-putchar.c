#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_putchar(void)
{
	int counter = 0;

	int chars[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	while (counter < 8)
	{
		putchar(chars[counter]);
		counter++;
	}
	putchar('\n');
}
int main(void)
{
	print_putchar();
	return(0);
}
