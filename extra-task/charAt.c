#include <stdio.h>

int charat(char s[], char c);

int main()
{
    char s[] = "thisistgk";
    char c = 's';

    printf("the position of char %c int the string is: %d\n", c, charat(s, c));
}

int charat(char s[], char c)
{
    int i;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == c)
            return i;
    }
    return -1;
}
