#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: a pointer for char input s
 *
 * Return: nothing is returned
 */
void print_rev(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
for (i = i - 1; i >= 0; i--)
{
_putchar(s[i]);

}
_putchar('\n');
}
