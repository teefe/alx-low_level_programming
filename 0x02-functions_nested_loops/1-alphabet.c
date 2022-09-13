#include <stdio.h>
#include "main.h"

/**
 * main - Prints the alpharbet using the putchar function
 *
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
}
	putchar('\n')
