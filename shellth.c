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
	ssize_t char_num;
	char *lneptr_c = NULL;
        const char *de = " \n";
        int numoftokens = 0;
        char *tokeniser;
        int i;

	(void)argc;

	while (1)
	{
		printf("%s", prompting);
		char_num = getline(&lneptr, &sze, stdin);

		if (char_num == -1)
		{
			printf("exiting if_shell...\n");
			return (-1);
		}

	lneptr_c = malloc(sizeof(char) *char_num);
	if (lneptr_c == NULL)
        {
                perror("failed memory allocation");
                return (-1);
        }

	 strcpy(lneptr_c, lneptr);

        tokeniser = strtok(lneptr, de);

        while (tokeniser != NULL)
	{
		numoftokens++;
		tokeniser = strtok(NULL, de);
	}
	numoftokens++;

	argv = malloc(sizeof(char *) * numoftokens);

	tokeniser = strtok(lneptr_c, de);


		printf("%s\n", lneptr);
	}

	if (lneptr != NULL)
	{
		free(lneptr);
	}
}
