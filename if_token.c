#include "shellth.h"

/**
 * strtok - converting a single string into tokens of strings
 * @de: to break this string into two separate strings.
 * @str: the string to be tokenize
 *
 */
char *strtok(char *str, const char *de)
{
	char *lneptr_c = NULL;
	const char *de = " \n";
	int numoftokens = 0;
	char *tokeniser;
	int i;

	lneptr_c = malloc(sizeof(char) * char_num);
	if (lneptr_c == NULL)
	{
		perror("failed memory allocation");
		return -1;
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

	for (i = 0; tokeniser != NULL; i++)
	{
		argv[i] = malloc(sizeof(char) * strlen(tokeniser));
		strcpy(argv[i], tokeniser);

		tokeniser = strtok(NULL, de);
	}
	argv[i] = NULL;

	return (0);
}
