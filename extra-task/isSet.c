#include <stdio.h>

int isZeroOne(int num, int pos);

int main()
{
    int a = 14;
    int i = 3;

    printf("is %d\n", isZeroOne(a, i));
}

int isZeroOne(int num, int pos)
{
    int c = 1;
    c = c<<(pos - 1);
    return (c&num) != 0 ? 1 : 0;
}
