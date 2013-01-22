#include <stdio.h>
#include <string.h>

int main() {
    float f;
    int i;

    char s[] = "foo -3.6 fum dum 17";
    sscanf( s, "foo %f fum dum %d", &f, &i );
    printf( "%f\t%d\n", f, i );
}
