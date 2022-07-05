#include "main.h"

/**
* _isLower - check Description.
*@c input
*Description : function that checks for lowercase character
* Returns 1 if c is lowercase
* Returns 0 otherwise
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
