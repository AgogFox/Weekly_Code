#include<stdio.h>

int main ()
{
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("x: %d\n", x);
    printf("y: %d", y);
}