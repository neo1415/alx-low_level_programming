#include "main.h"

/**
* _islower - check Description.
*@c: input
*Description : function that checks for lowercase character
* Return: 1 if c is lowercase or 0 if otherwise
*/

int _islower(int c)
{
char i;
int lower = 0;

for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
lower = 1;
}

return (lower);
}
