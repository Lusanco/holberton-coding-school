#include "header.h"

void commander(char *str)
{
	pid_t pid;
	char **args = NULL;
	int status;

	args = tokenizer(str);
	if (args == NULL || args[0] == NULL)
	{
		freetok(args);
		return;
	}
	if (access(args[0], X_OK) == -1)
	{
		fprintf(stderr, "./hsh: %d: %s: not found\n", pid, args[0]);
		freetok(args);
		exit(127);
	}
	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		freetok(args);
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		execve(args[0], args, environ);
		perror("execve");
		fprintf(stderr, "./hsh: %d: %s: not found\n", pid, args[0]);
		freetok(args);
		exit(127);
	}
	else
	{
		waitpid(pid, &status, 0);
		freetok(args);
	}
}
