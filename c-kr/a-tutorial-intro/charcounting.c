#include <stdio.h>

/*
 * count character in input. 1st version
 */
/*
main()
{
    long nc = 0;

    while(getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}*/

/* 2nd version */
main()
{
    double nc = 0;

    for(nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}
