#include <stdio.h>

void print(char c);
void printAnother(char c);

int main()
{
    char c;
    printf("type the capital letter:\n");
    scanf("%c", &c);
    printf("the result:\n");
    print(c);
    printf("\nanother:\n");
    printAnother(c);
}

void print(char cap)
{
    char row;
    for(row = 'A'; row <= cap; row++)
    {
        char blank;
        char mid;
        char end;
        
        //print blanks.
        for(blank = 0; blank < cap - row; blank++)
        {
            printf(" ");
        }

        //print middle part.
        for(mid = 'A'; mid <= row; mid++)
        {
            printf("%c", mid);
        }

        //print end part.
        for(end = row; end > 'A'; end--)
        {
            printf("%c", end - 1);
        }

        //print a new line.
        printf("\n");
    }
}

void printAnother(char letter)
{
    char row, CAP = letter;
    for(row = 'A'; row <= CAP; row++)
    {
        int blank;
        for(blank = 0; blank < CAP - row; blank++)
        {
            printf(" ");
        }

        int mid;
        for(mid = row - 'A'; mid >= 0; mid--)
        {
            printf("%c", CAP - mid);
        }

        int end;
        for(end = 1; end <= row - 'A'; end++)
        {
            printf("%c", CAP - end);
        }

        printf("\n");
    }
}
