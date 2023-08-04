#include <stdio.h>
#include "main.h"

/**
 * main - Prints out the number of arguments passed to the program
 * @argc: the Number of arguments
 * @argv: the Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /* Ignore argv */
printf("%d\n", argc - 1);

return (0);
}
