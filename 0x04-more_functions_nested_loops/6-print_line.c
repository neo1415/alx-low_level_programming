#include "main.h"

/**
* print_line - check description
* Description : function that draws a straight line in the terminal.
* @n: input
* Return: If n is 0 or less, the function should only print \n
*/

void print_line(int n)
{
int i = 0;

if (n > 0)
{
for (; i < n; i++)
_putchar('_');
}
_putchar('\n');
}
