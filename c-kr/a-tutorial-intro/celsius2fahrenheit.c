#include <stdio.h>

/**
 * Print the corresponding Celsius to Fahrenheit table.
 * @author thomsontang
 */
main()
{
    float fahr, celsius;

    int lower = 0;
    int upper = 300;
    int step = 20;

    celsius = lower;
    printf("Celsius Fahrenheis\n");
    while(celsius <= upper)
    {
        fahr = (celsius * 9.0) / 5.0 + 32;
        printf("%3.0f %9.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

}
