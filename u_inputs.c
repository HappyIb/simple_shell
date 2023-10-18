#include "shellth.h"

/**
 * u_inputs - A function that accepts user input
 *
 * @cmd: A pointer to the buffer, user input storage
 * @size: The size of the buffer
 *
 */

void u_inputs(char *cmd, size_t size)
{
	ssize_t char_num;


	char_num = getline(&cmd, &size, stdin);
	{
		if (char_num == -1)
		{
		if (feof(stdin))
		{
			printf("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("getline");
				exit(EXIT_FAILURE);
		}
		/*remove new line*/
		cmd[char_num - 1] = '\0';
		}
	}
}
