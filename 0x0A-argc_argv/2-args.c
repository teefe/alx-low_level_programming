#include <stdio.h>

/**
*main-print its argumet list
*@argc: argument count
*@argv: argument vector
*
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
