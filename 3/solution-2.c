#include<stdio.h>
int hight;
void pyramid (int x)
{
    if (x == 0) {return;}
    for(int i = 1; i <= x; i++)
    {
        printf(" ");
    }
    for(int j = 1; j <= (hight - x)*2 - 1; j++)
    {
        printf("*");
    }
    printf("\n");
    pyramid(x-1);
}

int main ()
{
    printf("Enter a number : ");
    scanf("%d", &hight);
    pyramid(hight - 1);
}