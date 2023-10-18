#include "shellth.h"

/**
 * check_de - Checks If A Character Match Any Char *
 * @c: Character To Check
 * @string: String To Check
 * Return: 1 Succes, 0 Failed
 */
unsigned int check_de(char c, const char *string)
{
 unsigned int u;

	for (u = 0; string[u] != '\0'; u++)
	{
		if (c == string[u])
			return (1);
	}
	return (0);
}



/**
 *
 *
 */
char *strtok(char *string, const char *de)
{
	static char *star;
	static char *rat;
	unsigned int u;

	if (string != NULL)
		rat = string;
	star = rat;

	if (star == NULL)
		return (NULL);

	for (u = 0; star[u] != '\0'; u++)
	{
	if (check_de(star[u], de) == 0)
		break;
	}
	if (rat[u] == '\0' || rat[u] == '#')
	{
	rat = NULL;
	return (NULL);
	}
	star = rat + u;
	rat = star;
	
	for (u = 0; rat[u] != '\0'; u++)
	{
	if (check_de(rat[u], de) == 1)
		break;
	}

	if (rat[u] == '\0')
		rat = NULL;

	else

	{
	rat[u] = '\0';
	rat = rat + u + 1;
	if (*rat == '\0')
	rat = NULL;
 	}
	return (star);
}
