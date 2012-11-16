#include <stdio.h>

/**
 * filecopying.c : copy input to output
 * 
 * read a character
 * while(character is not end-of-file indicator)
 *      output the character just read
 *      read a character
 *
 * author: ThomsonTang
 */

/* 1st version 
main()
{
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    
}*/

/* 2nd version */
main()
{
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    
}
