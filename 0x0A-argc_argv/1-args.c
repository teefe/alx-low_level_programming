#include <stdio.h>

/**
*main-print sthe number of args
*
*@argc:arguemnt count
*@argv: argument vector
*
*Return:0
*/
int main(int argc, char *argv[])
{
	int realargs;
	(void)argv;

	realargs = argc - 1;
	printf("%d\n", realargs);
	return (0);
}
