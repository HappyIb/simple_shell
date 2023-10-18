#include "shellth.h"

/**
 * main - entry point for the shell
 * @argc: number of command-line arguments
 * @argv: an array of pointers to string
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	char *prompting = "if_shell$$ ";
	char *lneptr;
	size_t sze = 0;

	(void)argc;
	(void)argv;

	while (1)
	{
		printf("%s", prompting);
		getline(&lneptr, &sze, stdin);
		printf("%s\n", lneptr);
	}

	if (lneptr != NULL)
	{
		free(lneptr);
	}
}
