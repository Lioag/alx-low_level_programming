#include <stdio.h>
/**
*main - Program to print alphabet letters in all cases followed by new line
*
*Return: return 0
*/
int main(void)

	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
	
		putchar(c);
		c++;
	}
	
	putchar('\n');
	return (0);

