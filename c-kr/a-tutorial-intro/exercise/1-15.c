#include <stdio.h>

int fahr2cel(int val);
void print_fahr_cel(int lower, int upper, int step);

main()
{
    int lower = 0;
    int upper = 300;
    int step = 20;

    print_fahr_cel(lower, upper, step);
}

/* convert fahreheit to celsius. */
int fahr2cel(int fahr)
{
    return 5 * (fahr-32) / 9;
}

void print_fahr_cel(int lower, int upper, int step)
{
    int fahr = lower;
    while(fahr <= upper) {
        printf("%d\t%d\n", fahr, fahr2cel(fahr));
        fahr += step;
    }
}
