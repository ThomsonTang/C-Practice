#include <stdio.h>
#include <string.h>

#define MAXLEN 1000
#define MAXLINES 5000

int getLine(char *, int);
char *alloc(int);

char *linePtr[MAXLINES];
int readLines(char *linePtr[], int nLines);
void writeLines(char *linePtr[], int nLines);

void quickSort(char *linePtr[], int left, int right);
