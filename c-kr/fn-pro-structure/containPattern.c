
/**
 * A program to print each line of its input that contains a particular
 * "pattern" or strings of characters.(Like a specifal case of the UNIX
 * program grep.)
 *
 * The job falls neatly into three pieces:
 *  
 * =========================================
 *  while(there's another line)
 *      if(the line contains the pattern)
 *          print it
 * =========================================
 *
 * Making each part as a separate function.
 */

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getLine(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould"; /* the pattern to search for */

main() {
    char line[MAXLINE];
    int found = 0;

    while(getLine(line, MAXLINE) > 0) {
        if(strindex(line, pattern) >= 0) {
            printf("%s", line);
            found++;
        }
    }
}

/* get line into s, return length */
int getLine(char s[], int lim) {
    int c, i;

    i = 0;
    while(--lim > 0 && (c=getchar()) != EOF && c != '\n')
        s[i++] = c;
    if(c == '\n')
        s[i++] = c;
    s[i] = '\0';
    
    return i;
}

/* return index of t in s, -1 if none */
int strindex(char s[], char t[]) {
    int i, j, k;

    for(i=0; s[i] != '\0'; i++) {
        for(j=i, k=0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if(k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}
