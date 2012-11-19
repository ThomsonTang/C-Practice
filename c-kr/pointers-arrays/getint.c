/**
 * Pointer arguments enable a function to access and change objects in the function that called it.
 * As an example, consider a function getint that performs free-format input conversion by breaking
 * a stream of characters into integer values, one integer per call. getint has to return the value
 * it found and also signal end of file when there is no more input.
 *
 * Our version of getint returns EOF for end of file, zero if the next input is not a number, and a
 * positive value if the input contains a valid number.
 */

#include <ctype.h>

int getch(void);
void ungetch(int);

/* getint: get next integer from input into *pn. */
int getint(int *pn)
{
    int c, sign;

    while (isspace(c = getch())) /* skip white space */
        ;
    if(!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c); /* it's not a number */
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}
