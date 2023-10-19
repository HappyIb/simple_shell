#include "shellth.h"

/**
 *
 *
 */
char *if_location(char *PATH, char *argv)
{
	char *path_c, *path_token, *if_filepath;
	char *de = ":", *buffr;

	path_c = strdup(PATH);
	path_token = strtok(path_c, de);

	if_filepath = malloc(strlen(argv) + strlen(path_token) + 2);

	while(path_token != NULL)
        {
		strcpy(if_filepath, path_token);
		strcat(if_filepath, "/");
		strcat(if_filepath, argv);
                strcat(if_filepath, "\0");
                if (access(if_filepath, X_OK) == 0)
		{
			free(path_c);
			return (if_filepath);
		}
		path_token = strtok(NULL, de);
	}
	free(if_filepath);
	free(path_c);
	return (NULL);
}


char *get_location(char *argv)
{
	char *if_path;
	
	if_path = getenv("PATH");
		if (if_path)
	{
		if_path = if_location(if_path, argv);
		return (if_path);
	}
	return (NULL);
}
