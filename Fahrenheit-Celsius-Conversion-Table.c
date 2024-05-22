#include <stdio.h>

/*Fahrenheit - Celsius Conversion Table */
main()
{
    /*Variables declaration*/
    int lower, upper, step;
    float fahrenheit, celsius;

    /*Setting Values*/
    lower = 0;   /* Lower limit of temperature table (this is where the table will start) */
    upper = 300; /* Upper limit (Used to stop the while loop) */
    step = 5;    /* Step size (you can change it as you please) */

    fahrenheit = lower; // set fahrenheit value to 0

    printf("This little piece of software was made with the intention of showing how to convert Fahrenheit to Celsius. \n");
    printf("You'll see a table with its respective equivalents, calculated with the code. \n\n");
    printf("Fahrenheit-Celsius Conversion Table \n\n");

    while (fahrenheit <= upper)
    {
        /*Formula*/
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        /*Print Result to Console*/
        printf("Fahrenheit: %.2f -- Celsius: %.2f \n", fahrenheit, celsius);
        /*Fahrenheit values goes up, until it reaches the limit set by the variable 'Upper' and the while loop breaks"*/
        fahrenheit = fahrenheit + step;
    }
}