#include "sort-lines.h"

int getLine(char *line, int limit) {
    int i, c;

    for (i = 0; (i < limit - 1) && ((c = getchar()) != EOF) && (c != '\n'); i++) {
        *line++ = c;
    }

    if (c == '\n') {
        line[i] = '\n';
        ++i;
    }
    line[i] = '\0';
    
    return i;
}
