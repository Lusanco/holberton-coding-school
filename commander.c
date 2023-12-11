#include "header.h"

void commander(char *str)
{
	pid_t pid;
	char **args = NULL;
	int status;

	args = tokenizer(str);
	if (args == NULL)
	{
		fprintf(stderr, "Error tokenizing input\n");
		return;
	}
	if (access(args[0], X_OK == -1))
	{
		perror("access");
		fprintf(stderr, "Command '%s' not found\n", args[0]);
		free(args);
		return;
	}
	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		free(args);
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		execve(args[0], args, NULL);
		perror("execve");
		free(args);
		exit(EXIT_FAILURE);
	}
	else
	{
		waitpid(pid, &status, 0);
		free(args);
	}
}
