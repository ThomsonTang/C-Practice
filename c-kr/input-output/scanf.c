#include <stdio.h>

void scanfDate();
void calSum();
void scanfDateFormat();

main()
{
    //scanfDate();
    calSum();
    //scanfDateFormat();
    return 0;
}

void scanfDate()
{
    int day, year;
    char month[20];

    scanf("%d %s %d", &day, month, &year);

    printf("%d-%s-%d\n", day, month, year);
}

void calSum()
{
    printf("please input two numbers:\n");
    double a, b;

    int c = scanf("%lf %lf\n", &a, &b);
    printf("the sum of %d numbers is: %.2f\n", c, a + b);
}

void scanfDateFormat()
{
    int day, month, year;

    scanf("%d/%d/%d", &month, &day, &year);

    printf("%d-%d-%d\n", month, day, year);
}
