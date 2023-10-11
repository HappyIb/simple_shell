#include "shellth.h"

/**
 * printfull - function to print string or int.
 * @string: string to print
 * @stream: the file descriptor to write to
 */

void printfull(char *string, int stream)
{
	int n = 0;

	for (n = 0; string[n]; n++)
		write(stream, &string[n], 1);
}
