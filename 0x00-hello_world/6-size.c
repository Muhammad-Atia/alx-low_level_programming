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
  PRINTSIZE(int);
  return (0);
}
