#include <stdio.h>

/**
 * Print all input lines that are longer than 8 characters.
 */
#define LIMIT 8
#define MAXLEN 100

int getLine(char line[], int maxline);

main() {
   char line[MAXLEN]; 
   int len;

   while((len = getLine(line, MAXLEN)) > 0) {
       if(len >= LIMIT)
           printf("%s\n", line);
   }
}

int getLine(char s[], int m)
{
    int c, i;

    i = 0;
    for(i=0; (c=getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if(c == '\n') {
        s[i] = '\n';
        i++;
    }
    s[i] = '\0';

    return i;
}
