#ifndef SHELLTH_H
#define SHELLTH_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>


void printfull(char *string, int stream);
void prompting(void);
int main(int argc, char **argv);
void fi_fork(char **str, char **envi, int *status);
char *strtok(char *str, const char *de);
char *if_location(char *PATH, char *argv);
char *get_location(char *argv);

#endif
