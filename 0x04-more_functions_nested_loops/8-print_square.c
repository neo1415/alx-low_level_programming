#include "main.h"

/**
* print_square - check description
* Description :  function that prints a squar
* followed by a new line.
* @size: input
* Return: If size is 0 or less, the function
* should print only a new line
*/

void print_square(int size)
{
int i, j;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
_putchar('#');
_putchar('\n');
}
}
else
_putchar('\n');
}
