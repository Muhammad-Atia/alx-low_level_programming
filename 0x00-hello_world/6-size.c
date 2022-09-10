#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints "with proper grammar, but the outcome is a piece of
 * art,"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
printf ("Size of a  %zu\n byte(s)", sizeof(char));
printf ("Size of an %zu\n", sizeof(int));
printf ("Size of a  %zu\n", sizeof(long int));
printf ("Size of a  %zu\n", sizeof(long long int));
printf ("Size of a  %zu\n", sizeof(float));

return (0);
}
