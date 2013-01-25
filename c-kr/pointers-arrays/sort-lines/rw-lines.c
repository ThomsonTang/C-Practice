#include "sort-lines.h"

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
