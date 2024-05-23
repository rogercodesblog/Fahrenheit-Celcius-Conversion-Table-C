/*Include stdio.h library, so we can use printf*/
#include <stdio.h>

/*Define constants*/
#define START 0
#define END 300
#define STEP 5

/*Fahrenheit - Celsius Conversion Table */
main()
{
    /*Print Messges to console to explain what's going on*/
    printf("This little piece of software was made with the intention of showing how to convert Fahrenheit to Celsius. \n");
    printf("You'll see a table with its respective equivalents. \n\n");
    printf("Fahrenheit-Celsius Conversion Table \n\n");

    /*Define variable*/
    int fahrenheit;

    /*For Loop that will end when the 'fahrenheit' variable reaches the value of END*/
    for (fahrenheit = START; fahrenheit <= END; fahrenheit = fahrenheit + STEP)
    {
        /*Print the repective values, the celcius value is calculated then printed*/
        printf("Fahrenheit: %.2f -- Celsius: %.2f \n", fahrenheit, (5.0 / 9.0) * (fahrenheit - 32.0));
    }
}