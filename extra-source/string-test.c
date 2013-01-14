#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 3 
main()
{
    char str[] = "tgk";
    int l, i;

    /*str[0] = 't';
    str[1] = 'g';
    str[2] = 'k';
    str[3] = '\n';
    str[4] = '\0';*/

    l = strlen(str);

    printf("str:\t%s\n", str);
    printf("length:\t%d\n", l);
    printf("str:\t%c\n", str[6]);

}
