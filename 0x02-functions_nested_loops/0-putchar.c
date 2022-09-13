#include <stdio.h>

void print_putchar(void)
{
	int counter = 0;

	int chars[] = {95, 112, 117, 11, 99, 104, 97, 114,};

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
