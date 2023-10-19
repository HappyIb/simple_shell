#include "shellth.h"
/**
 * if_fork - creates a child process
 * @str: A pointer to an argument vector
 * @envi: A pointer to environment variables
 * @stat: The integer value of the return status
 */
void if_fork(char **str, char **envi, int *stat)
{
	pid_t mi_pid;
	int if_stat;

	mi_pid = fork();
	if (mi_pid == -1)
	{
		free(str);
		perror("forking error");
	exit(EXIT_FAILURE);
	}
	wait(&if_stat);
	if (if_stat != 0)
		*status = 2;
	else
		*status = 0;
	free(str);
}
