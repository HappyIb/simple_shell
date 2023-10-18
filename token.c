#include "shellth.h"

/**
 * num_tokens - function to know number of tokens
 * @str: string input
 * @de: delimiter
 * Return: number of tokenized strings
 */

int num_tokens(char *str, char *de)
{
	int numb = 0;
	char *tokenised;

	tokenised = strtok(str, de);
	while (tokenised)
	{
		numb++;
		tokenised = strtok(NULL, " ");
	}
	return (++numb);
}
