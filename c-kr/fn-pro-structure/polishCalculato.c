/**
 * write a calculator program that provides the operators +, -, * and /.
 * because it is easier to implement, the calculator will use reverse polish
 * notation instead of infix.
 * the structure of the program is thus a loop that performs the proper operation
 * on each operator and operand as it appears:
 *
 *==============================================================================
 *  while(next operator or operand is not end-of-line indicator)
 *      if(number)
 *          push it
 *      else if(operator)
 *          pop operands
 *          do operation
 *          push result
 *      else if(newline)
 *          pop and print top of stack
 *      else
 *          error
 *==============================================================================
 *
 * We think of the program as existing in one source file, it will look like this:
 *
 * =============================================================================
 * #includes
 * #defines
 *
 * function declarations for main
 *
 * main() {......}
 *
 * external variables for push and pop
 *
 * void push(double f) {...}
 * double pop(void) {...}
 *
 * int getop(char s[]) { ... }
 *
 * routines called by getop
 * ==============================================================================
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>     /* for atof() */

#define MAXOP 100   /* max size of operand or operator. */
#define NUMBER '0'  /* signal that a number was found. */

/* function declarations for main. */
int getop(char []);
void push(double);
double pop(void);

/* reserve polish calculator */
main()
{
    int type;
    double op2;
    char s[MAXOP];

    while((type = getop(s)) != EOF) {
        switch(type) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if(op2 != 0.0)
                    push(pop() / op2);
                else
                    printf("error, divisor can not be zero!\n");
                break;
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("error, unknown command %s\n", s);
                break;
        }
    }
    return 0;
}


#define MAXVAL 100  /* maximum depth of val stack. */

int sp = 0; /* next free stack position. */
double val[MAXVAL];

/* push f onto value stack */
void push(double f)
{
    if(sp < MAXVAL)
        val[sp++] = f;
    else
        printf("push: stack full, can't push %g\n", f);
}

/* pop and return the top value from stack. */
double pop(void)
{
    if(sp > 0)
        return val[--sp];
    else {
        printf("pop: stack empty!\n");
        return 0.0;
    }
}


#include <ctype.h>

int getch(void);
void ungetch(int);

/* get next character or numeric operand. */
int getop(char s[])
{
    int i, c;

    while((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if(!isdigit(c) && c != '.')
        return c;   /* not a NUMBER */
    i = 0;
    if(isdigit(c)){ /* collect integer part */
        while(isdigit(s[++i] = c = getch()))
            ;
    }
    if(c == '.')    /* collect fraction part */
        while(isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if(c != EOF)
        ungetch(c);
    return NUMBER;
}


#define BUFSIZE 100

char buf[BUFSIZE];  /* buffer for ungetch */
int bufp = 0;   /* next free position in buf */

int getch(void)     /* get a (possibly pushed-back) character */
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)     /* push character back on input */
{
    if(bufp > BUFSIZE)
        printf("ungetch: too many characters. \n");
    else
        buf[bufp++] = c;
}

