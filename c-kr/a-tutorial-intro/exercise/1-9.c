#include <stdio.h>

/*
 * Copy input to ouput, replacing each string of one or more blanks by a single blank.
 */

/*
   main()
   {
   int c, lastc;

   c = lastc = 0;
   while((c = getchar()) != EOF) {
   if(c != ' ')
   putchar(c);
   if(c == ' ')
   if(lastc != ' ')
   putchar(c);
   lastc = c;
   }
   }
   */
/**
 * use if-else statement.
 *
main()
{
    int c, lastc;

    c = lastc = 0;
    while((c = getchar()) != EOF) {
        if(c != ' ')
            putchar(c);
        else if(lastc != ' ')
            putchar(c);
        lastc = c;
    }
}
*/

/*
   main()
   {
   int c, lastc;

   c = lastc = 0;
   while((c = getchar()) != EOF) {
   if(c != ' ' || lastc != ' ')
   putchar(c);
   lastc = c;
   }
   }*/
