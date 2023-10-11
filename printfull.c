#include "shellth.h"

/*
 * printfull - a function that prints a string or an interger
 *
 * @string: string to print
 * @desc: file descriptor to write to
 */

void printfull(char *string, int *desc)
{
	int n = 0;

	for (n = 0; string[n]; n++)
		write(STDOUT_FILENO, &string[n], 1);
}
