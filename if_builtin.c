#include "shellth.h"
/**
 *
 *
 *
 */
int if_builtin(char **argv)
{
	if (strcmp(argv[0], "exit") == 0)
	{
	if_printStr("Exiting Shell...\n");
	exit(0);
	}
	else if (strcmp(argv[0], "cd") == 0)
        {
		if (argv[1] == NULL)
			chdir(getenv("HOME"));
		else
			chdir(argv[1]);
	}
	return (0);
}
