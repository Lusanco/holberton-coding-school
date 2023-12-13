#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

extern char **environ;

char **tokenizer(char *str);
void commander(char *str);
void freetok(char **tokens);
void execheck(char **args);
void pathinator(char **args);

/* Filename: header.h */
#endif /* HEADER_H */
