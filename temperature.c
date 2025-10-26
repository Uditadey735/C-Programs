//WAPC to input the temperature in Celsius and output it in Fahrenheit

#include<stdio.h>
int main()
{
    float tempCelsius,tempFahrenheit;
    printf("\nEnter the temperature in Celsius:");
    scanf("%f", &tempCelsius);
    tempFahrenheit=((9*tempCelsius)/5)+32.0;
    printf("\nThe temperature in Fahrenheit scale is %.2f",tempFahrenheit);
    return 0;
}
