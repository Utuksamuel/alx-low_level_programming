#include "main.h"
#include <stdio.h>
/**
* print_array - it prints an array
*@a: an array
*@n: is the length of array
* Return: void
*/
void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
printf("%d", *(a + i));
if (i < (n - 1))
{
printf(", ");
}
i++;
}
printf("\n");
}
