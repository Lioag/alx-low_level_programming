#include "main.h"
/**
*Write a function that prints the alphabet
*in lowercase, followed by a new line
*Return:
*/
void print_alphabet(void)
{
	int letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar (letter);
	}
		_putchar (10);
}
