#include <stdio.h>

void FirstFunction(void);
void SecondFunction(int);

int main(void) {
    printf("hello world!\n");
    FirstFunction();
    printf("goodbye world!\n");

    return 0;
}

void FirstFunction(void) {
    int imidate = 3;
    char broiled = 'c';
    void *whereProhibited = NULL;

    SecondFunction(imidate);
    imidate = 10;
}

void SecondFunction(int a) {
    int b = a;
}
