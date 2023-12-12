#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

char **tokenizer(char *str);
void commander(char *str);
void freetok(char **tokens);

/* Filename: header.h */
#endif /* HEADER_H */
