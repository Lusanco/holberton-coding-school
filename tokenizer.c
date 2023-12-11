#include "header.h"

/**
 * tokenizer - tokenize string into array of strings
 *
 * @str: string to tokenize
 *
 * Return: array of strings
 */

char **tokenizer(char *str)
{
	char **tokens = NULL;
	char *token, *dup;
	int i = 0;

	tokens = malloc(sizeof(char *));
	if (!tokens)
	{
		perror("malloc");
		return (NULL);
	}
	dup = strdup(str);
	if (!dup)
	{
		perror("strdup");
		free(tokens);
		return (NULL);
	}
	token = strtok(str, " ");
	while (token)
	{
		tokens[i] = strdup(token);
		if (!tokens[i])
		{
			perror("strdup");
			free(dup);
			free(tokens);
			return (NULL);
		}
		i++;
		tokens = realloc(tokens, sizeof(char *) * (i + 1));
		if (!tokens)
		{
			perror("realloc");
			free(dup);
			return (NULL);
		}
		token = strtok(NULL, " ");
	}
	tokens[i] = NULL;
	free(dup);
	return (tokens);
} /* Filename: tokenizer.c */
