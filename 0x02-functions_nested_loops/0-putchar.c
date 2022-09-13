#include <stdio.h>
#include "main.h"
/**
 * main -executes printchar
 *
 * Return void
 *
 * print_putchar -prints the _putchar statements
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
	return (0);
}
