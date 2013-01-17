#include <stdio.h>

int strcmp_1(char *s, char *t);
int strcmp_2(char *s, char *t);

int main()
{
    char *s = "tgk";
    char *t = "lyh";

    printf("the value of compare two strings(version 2): %d\n", strcmp_2(s, t));
}

int strcmp_1(char *s, char *t)
{
    int i;

    for(i = 0; s[i] == t[i]; i++)
    {
        if(s[i] == '\0')
        {
            return 0;
        }
    }

    return s[i] - t[i];
}

int strcmp_2(char *s, char *t)
{
    for(; *s == *t; s++, t++)
    {
        if(*s == '\0')
            return 0;
    }
    return *s - *t;
}
