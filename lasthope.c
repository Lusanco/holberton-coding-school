#include "header.h"
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i, token_count = 0, j = 0;
    char *path, *token, *path_dup;
    char **arr;

    for (i = 0; environ[i] != NULL; i++)
    {
        if (strstr(environ[i], "PATH=") == environ[i])
        {
            /* Found the PATH variable */
            path = environ[i] + 5; /* Skip "PATH=" */
            /* Now you can use strtok or any other
             * string manipulation functions on 'path'
             * For example, using strtok to tokenize
             * the directories in the PATH
             */
            path_dup = strdup(path);
            token = strtok(path_dup, ":");
            while (token != NULL)
            {
                token_count++;
                token = strtok(NULL, ":");
            }
            free(path_dup);

            arr = malloc((token_count + 1) * sizeof(char *));
            token = strtok(path, ":");
            while (token != NULL)
            {
                /* Allocate memory for the token and '/' */
                arr[j] = malloc(strlen(token) + 2);
                strcpy(arr[j], token);
                strcat(arr[j], "/"); /* Add '/' at the end */
                j++;
                token = strtok(NULL, ":");
            }

            arr[j] = NULL;
            for (j = 0; j < token_count; j++)
                printf("%s\n", arr[j]);

            /* Free allocated memory */
            for (j = 0; j < token_count; j++)
                free(arr[j]);
            free(arr);
        }
    }
    return 0;
}
