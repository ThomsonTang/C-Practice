#include "sort-lines.h"

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
