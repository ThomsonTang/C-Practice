#include <stdio.h>

void a_strcpy(char *s, char *t);
void p_strcpy(char *s, char *t);
void ex_strcpy(char *s, char *t);

main() 
{
    char *t = "this is tgk";
    char s[5];  
    char ps[10] ;

    //a_strcpy(s, t);
    //p_strcpy(ps, t);
    ex_strcpy(ps, t);

    printf("the content of s is: %s\n", ps);
}

/* copy t to s, the array subscript version */
void a_strcpy(char *s, char *t)
{
    int i;

    i = 0;
    while((s[i] = t[i]) != '\0')
        i++;
}

/* copy t to s, the pointer version */
void p_strcpy(char *s, char *t)
{

    while((*s = *t) != '\0') {
        s++;
        t++;
    }
}

/* copy t to s, experienced pointer version */
void ex_strcpy(char *s, char *t)
{
    while((*s++ = *t++) != '\0')
        ;
}
