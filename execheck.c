#include "header.h"

void execheck(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		execve(args[0], args, environ);
		perror("exeve");
		fprintf(stderr, "./hsh: %s: command not found\n", args[0]);
		exit(2);
	}
	else
		waitpid(pid, &status, 0);
}
