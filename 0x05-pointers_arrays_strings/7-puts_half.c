#include "main.h"

/**
* puts_half - a function that prints half of a string, followed by a new line.
* @str: input string
* Return: Nothing
*/

void puts_half(char *str)
{
int length = 0, i, j;

while (str[length] != '\0')
length++;

if (length % 2 == 0)
j = length / 2;

else
j = (length + 1) / 2;

for (i = j; i < length; i++)
_putchar(str[i]);

_putchar('\n');
}
