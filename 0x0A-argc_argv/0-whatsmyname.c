#include <stdio.h>
#include "main.h"

/**
 * main - Prints out the name of the program
 * @argc: the Number of arguments
 * @argv: the Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);

return (0);
}
