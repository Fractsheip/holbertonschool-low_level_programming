#include <stdio.h>
#include "main.h"

/**
* print_numbers - print numbers from 0 - 9 with putchar
* Return:return the multiplies
*/

void print_numbers(void)
{
int i = 0;

while (i < 10)
{
_putchar(i);
i++;
}
_putchar('\n');
}
