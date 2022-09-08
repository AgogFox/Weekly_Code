#include<stdio.h>

int main ()
{
    int hight = 0;
    printf("Enter a number : ");
    scanf("%d", &hight);

    for (int i = 1; i <= hight; i++)
    {
        for (int k = 1; k <= hight - i; k++)
        {
            printf(" ");
        }
        
        for (int k = 1; k <= i*2 - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}