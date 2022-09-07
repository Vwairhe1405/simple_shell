#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>

/* Shell utility function */
void Ctrl_C(int);
char * _getline(void);

/* Shell helper function */
int print(char *, int);

/* Shell string function */
int strlen(char * );

/* Intialize size of buffer for user input */
#define READ BUF 1000

/* Shell management */
void *realloc(void *, int, int);

#endif /* SHELL_H */
