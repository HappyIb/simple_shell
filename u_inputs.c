#include "shellth.h"

/*
 * u_inputs - A function that accepts user input
 *
 * @cmd: A pointer to the buffer, user input storage
 * @size: The size of the buffer
 *
 */

void u_inputs(char *cmd, size_t size)
{
	if (fgets(cmd, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			printfull("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("fgets");
				exit(EXIT_FAILURE);
		}
		cmd[strcspn(cmd, "\n")] = '\0';     /*Remove newline*/
	}
}
