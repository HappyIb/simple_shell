#include "shellth.h"

/**
 * forking - creates a child process, executes the command.
 * @str: A pointer to an argument vector.
 * @envi: A pointer to environment variables.
 * @stat: The integer value of the return status.
 * Return: 0 on success, or -1 on failure.
 */
int forking(char **str, char **envi, int *stat)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1)
	{
	perror("fork");
	return (-1);
	}

	if (child_pid == 0)
	{
	execve(str[0], str, envi);
	perror("execve");
	exit(EXIT_FAILURE);
	}


	status = waitpid(child_pid, &status, 0);
	if (status == -1)
	{
	perror("waitpid");
	return (-1);
	}


	if (WIFEXITED(status) && WEXITSTATUS(status) != 0)
	{
		*stat = 2;
	}
	else
	{
		*stat = 0;
	}

	free(str);

	return (0);
}
