#include "header.h"

/**
 * create_tokens - tokenize string into array of strings
 *
 * @str: string to tokenize
 *
 * Return: array of strings
 */

char **create_tokens(char *str)
{
	char **tokens = NULL;
	char *token, *dup;
	int count = 0;

	dup = strdup(str);
	token = strtok(dup, " ");
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, " ");
	}
	free(dup);
	tokens = malloc((count + 1) * sizeof(char *));
	if (tokens == NULL)
	{
		free(dup);
		return (NULL);
	}
	token = strtok(str, " ");
	count = 0;
	while (token != NULL)
	{
		tokens[count] = strdup(token);
		count++;
		token = strtok(NULL, " ");
	}
	tokens[count] = NULL;
	return (tokens);
}
