#include <stdio.h>
#define PRINTSIZE(Type) printf("Size of a " #Type ":", sizeof(Type))
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
PRINTSIZE(char);
PRINTSIZE(int);
PRINTSIZE(long int);
PRINTSIZE(long long int);
PRINTSIZE(float);
return (0);
}
