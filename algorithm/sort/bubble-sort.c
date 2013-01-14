#include <stdio.h>

#define MAXSIZE 100

int main() 
{
    int arr[MAXSIZE];
    int num, n;

    printf("Enter number of elements for sorted:\n");
    scanf("%d", &num);
    
    printf("Enter %d integers for sorting:\n", num);
    for(n = 0; n < num; n++) {
        scanf("%d", &arr[n]);
    }

    int i, j, temp;
    for(i = 0; i < (num - 1); i++) {
        for(j = 0; j < (num - i - 1); j++) {
            //swap the elements
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted list is: \n");
    for(i = 0; i < num; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
