/**********************************************************************
 * Valid Pointer Arithmetic Operation
 *
 * assignment of pointer of the same type 
 * adding or subtracting a pointer and an integer
 * subtracting or comparing two pointers to members of the same array
 * assigning or comparing to zero
 *
 **********************************************************************/
#include <stdio.h>

int strLength(char *s);
int strLen(char *s);

int main() {

    char *ptr = "tangguike";
    char array[] = "tangguike";

    printf("the string length: %d\n", strLength("tangguike")); // 9
    printf("the pointed string length: %d\n", strLen(ptr)); // 9
    printf("the character array string length: %d\n", strLength(array));
    printf("the %s length: %d\n", &array[3], strLength(&array[3]));

}

/* strlen: return length of the character string s. */
int strLength(char *s) {
    int n;

    for(n = 0; *s != '\0'; s++) {
        n++;
    }

    return n;
}

int strLen(char *str)
{
    char *p = str;

    while(*p != '\0') {
        p++;
    }

    return p - str;
}
