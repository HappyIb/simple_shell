#ifndef SHELLTH_H
#define SHELLTH_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>


void printfull(char *string, int *desc);
void prompting(void);
int main(void);
void u_inputs(char *cmd, size_t size);


#endif
