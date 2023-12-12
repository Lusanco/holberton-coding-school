#include "header.h"

void commander(char *str)
{
	pid_t pid;
	char **args = NULL, **pathtokens = NULL;
	char *path = NULL, *cmdpath = NULL;
	int status;
	size_t i;

	args = tokenizer(str);
	if (args == NULL || args[0] == NULL)
	{
		freetok(args);
		return;
	}
	if (access(args[0], X_OK) == 0)
	{
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
			exit(2);
		}
		else
			waitpid(pid, &status, 0);
	}
	else
	{
		for (i = 0; environ[i] != NULL; i++)
			if (strncmp(environ[i], "PATH=", 5) == 0)
			{
				path = environ[i] + 5;
				break;
			}
		if (path == NULL)
		{
			fprintf(stderr,
				"Error: PATH environment variable not set\n");
			freetok(args);
			return;
		}
		pathtokens = tokenizer(path);
		if (pathtokens == NULL)
		{
			freetok(args);
			return;
		}
		for (i = 0; pathtokens[i] != NULL; i++)
		{
			cmdpath = malloc(strlen(pathtokens[i])
					+ strlen(args[0]) +2);
			if (cmdpath == NULL)
			{
				perror("maloc");
				freetok(args);
				freetok(pathtokens);
				return;
			}
			sprintf(cmdpath, "%s%s", pathtokens[i], args[0]);
			if (access(cmdpath, X_OK) == 0)
			{
				pid = fork();
				if (pid == -1)
				{
					perror("fork");
					freetok(args);
					freetok(pathtokens);
					free(cmdpath);
					exit(EXIT_FAILURE);
				}
				else if (pid == 0)
				{
					execve(cmdpath, args, environ);
					perror("execve");
					fprintf(stderr, "./hsh: %d: %s: not found\n", pid, args[0]);
					freetok(args);
					freetok(pathtokens);
					free(cmdpath);
					exit(2);
				}
				else
				{
					waitpid(pid, &status, 0);
					freetok(pathtokens);
					free(cmdpath);
					break;
				}
			}
			free(cmdpath);
		}
		fprintf(stderr, "./hsh: %s: not found\n", args[0]);
		freetok(pathtokens);
	}
	freetok(args);
}
