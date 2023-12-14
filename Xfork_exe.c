#include "header.h"

/**
 * fork_exe - create a child process and execute a command
 *
 * @args: array of arguments
 * @environ: environment variables
 */

void fork_exe(char **args, char **environ)
{
	pid_t pid = fork();

	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		execve(args[0], args, environ);
		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
