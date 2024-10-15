#include "header.h"

/**
 * paths - Search for the command in
 * predefined paths and execute if found
 *
 * @args: array of arguments
 * @environ: environment variables
 */

void paths(char **args, char **environ)
{
	int i;
	char *path;
	char paths[][30] = {"/usr/local/bin/", "/usr/bin/",
		"/bin/", "/usr/local/games/", "/usr/games/"};

	for (i = 0; i < 5; i++)
	{
		path = malloc(strlen(paths[i]) + strlen(args[0]) + 2);
		if (path == NULL)
		{
			perror("malloc");
			exit(EXIT_FAILURE);
		}
		strcpy(path, paths[i]);
		strcat(path, args[0]);
		if (access(path, X_OK) == 0)
		{
			free(args[0]);
			args[0] = strdup(path);
			fork_exe(args, environ);
			free(path);
			break;
		}
		free(path);
	}
}
