#include <stdio.h>
/* Exercise 1-3. Modify the temperature conversion program to print a heading above the table */
void main(void)
{
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
}
