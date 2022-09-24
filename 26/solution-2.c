#include<stdio.h>

int main ()
{
    int num, count, line = 1, trigger = 0;
    printf("Enter number : ");
    scanf("%d", &num);
    count = (num * 2) - 1;
    while(1)
    {
        if (line == num)
        {
            for (int i = 1; i <= count; i++)
            {
                printf("*");
            }
            printf("\n");
            trigger = 1;
            line--;
        }
        if (line == 0)
        {
            break;
        }
        for (int i = 1; i <= line; i++)
        {
            printf("*");
        }
        for (int i = 1; i <= count - line * 2; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= line; i++)
        {
            printf("*");
        }
        printf("\n");

        //counter
        trigger == 0? line++: line--;
    }
}