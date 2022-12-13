#include "main.h"
/**
* Write a function that prints 10 times the alphabet, 
* in lowercase, then a new line.
*desc: The function uses loop to operate
*Return:
*/
void print_alphabet_x10(void)
{
int counter = 0;
int letter;
while (counter++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar(10);
}
}
