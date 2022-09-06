#include<stdio.h>

int main ()
{
    float weight, height;

    printf("Enter your weight : ");
    scanf("%f", &weight);
    printf("Enter your height : ");
    scanf("%f", &height);
    weight = weight / (height * height);
    if (weight < 18.5)
    {
        printf("Underweight");
    }
    else if (weight >= 18.5 && weight <=24.9)
    {
        printf("Normal");
    }
    else if (weight >= 25.0 && weight <= 29.9)
    {
        printf("Taller than normal");
    }
    else
    {
        printf("Overweight");
    } 
}