/*****************************************************************************
 *
 * The sort process has three steps:
 *      read all the lines of input
 *      sort them
 *      print them in order
 *
 * The input routine has to collect and save all the characters of each line,
 * and build an array of pointers to the lines. It will also have to count the
 * number of input lines, since that information is needed for sorting and 
 * printing.
 *
 * The output routine only has to print the lines in the order in which they 
 * appear in the array of pointers.
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAXLINES 5000

char *linePtr[MAXLINES];

int readLines(char *linePtr[], int nLines);
void writeLines(char *linePtr[], int nLines);

void quickSort(char *linePtr[], int left, int right);

int main() {
    int nLines;

    if ((nLines = readLines(linePtr, MAXLINES)) >= 0) {
        quickSort(linePtr, 0, nLines - 1);
        writeLines(linePtr, nLines);
        
        return 0;;
    } else {
        printf("error: input too big to sort.\n");
        return 1;
    }
}

#define MAXLEN 1000
int getLine(char *, int);
char *alloc(int);

int readLines(char *linePtr[], int maxLines) {
    int len, nLines;
    char *p, line[MAXLEN];

    nLines = 0;
    while ((len = getLine(line, MAXLEN)) > 0) {
        if ((nLines >= maxLines) || ((p = alloc(len)) == NULL)) {
            return -1;
        } else {
            line[len - 1] = '\0';
            strcpy(p, line);
            linePtr[nLines++] = p;
        }
    }
    return nLines;
}

void writeLines(char *linePtr[], int nLines) {
    int i;

    for (i = 0; i < nLines; i++) {
        printf("%s\n", linePtr[i]);
    }
}

int getLine(char *line, int limit) {
    int i, c;

    for (i = 0; (i < limit - 1) && ((c = getchar()) != EOF) && (c != '\n'); i++) {
        *line++ = c
    }

    if (c == '\n') {
        s[i] = '\n';
        ++i;
    }
    s[i] = '\0';
    
    return i;
}
