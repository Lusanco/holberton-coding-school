#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

extern char **environ;

void no_line(char **str, ssize_t *bytes);
char **create_tokens(char *str);
int some_space(char **args, char *str);
void paths(char **args, char **environ);
void no_command(char **args, char *str);
void free_iterator(char **array);
void fork_exe(char **args, char **environ);

/* Filename: header.h */
#endif /* HEADER_H */
