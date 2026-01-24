#include <stdio.h>
/* Exercise 1-3. Modify the temperature conversion program to print a heading above the table */

// Write a program to print the corresponding Celsius to Fahrenheit table.

void fahrToCels(){
    float fahr, celsius;
    float lower, upper, step;
    lower = 0; /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;
    printf("%s | %s\n", "Fahrenheit", "Celsius" );
    while (celsius <= upper) {
        celsius = (fahr - 32) * 5/9;
        printf("%10.0f | %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

void celsToFahr(){
    float fahr, celsius;
    float lower, upper, step;
    lower = 0; /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;
    printf("%3s | %6s\n", "Celsius", "Fahrenheit" );
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%7.0f | %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("\n");
}

int main()
{
    fahrToCels();
    celsToFahr();
    return 0;
    // more efficient way of doing it inside the first loop
    // {
    //     int fahr;
    //     for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    //         printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    // }
}
