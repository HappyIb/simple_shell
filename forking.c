#include "shellth.h"
/**
 * fi_fork - creates a child process
 * @str: A pointer to an argument vector
 * @envi: A pointer to environment variables
 * @status: The integer value of the return status
 */
void fi_fork(char **str, char **envi, int *status)
{
	pid_t i_pid;
	int fi_stat;

	i_pid = fork();

	if (i_pid == -1)
	{
		free(str);
		perror("Forking Error");
		exit(EXIT_FAILURE);
	}

	if (i_pid == 0)
	{
		execve(str[0], str, envi);
		free(str);
		exit(EXIT_FAILURE);
	}

	wait(&fi_stat);
	if (fi_stat != 0)
		*status = 2;

	else
		*status = 0;
	free(str);
}
