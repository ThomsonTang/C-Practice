#include <stdio.h>

int strLength(char *s);

int main() {

    char *ptr = "tangguike";
    char array[] = "tangguike";

    printf("the string length: %d\n", strLength("tangguike"));
    printf("the pointed string length: %d\n", strLength(ptr));
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
