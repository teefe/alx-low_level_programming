#include ""main.h"

/**
*_strlen - counts the string length
*@counter: stores len
*@s: the string parameter
*
*Return counter
*/
int _strlen(char s[])
{
	int counter = 0;

	while (s[counter] != '\0')
		counter++;
	return (counter)
}
