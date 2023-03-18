#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
int i = 0;
char numbers[] = "0123456789";
while (i < 10)
{
putchar(numbers[i]);
i++;
}
putchar('\n');
return (0);
}
