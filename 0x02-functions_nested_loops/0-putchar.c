#include "main.h"

/**
*main - function prints text as output
*
*Return: 0
*/
int main(void)
{
	char school[10] = "_putchar";

	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(school[a]);
	}
	_putchar(10);
	return (0);
}
