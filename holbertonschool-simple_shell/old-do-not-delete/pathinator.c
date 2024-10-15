#include "header.h"

void pathinator(char **args)
{
	char path[][30] = {"/usr/local/bin/", "/usr/bin/",
		"/bin/", "/usr/local/games/", "/usr/games/"},
	     *fpaths;
	int i;

	for (i = 0; i < 5; i++)
	{
		fpaths = malloc(strlen(path[i]) + strlen(args[0]) + 1);
		if (fpaths == NULL)
		{
			perror("malloc");
			exit(EXIT_FAILURE);
		}
		strcpy(fpaths, path[i]);
		strcat(fpaths, args[0]);
		if (access(fpaths, X_OK) == 0)
		{
			free(args);
			free(fpaths);
			break;
		}
		free(fpaths);
	}
}
