#include<stdio.h>

int main ()
{
    int num, count, line = 0, trigger = 0;
    printf("Enter number : ");
    scanf("%d", &num);
    count = (num * 2) - 1;
    while(1)
    {   
        if (line == num)
        {
            trigger = 1;
            line -=2;
        }
        if (line < 0)
        {
            break;
        }
        for (int i = 1; i <= line; i++)//print space
        {
            printf(" ");
        }
        for (int i = 1; i <= count - line*2; i++) //print star
        {
            printf("*");
        }
        printf("\n");
        trigger == 0? line++: line--;

    }
}