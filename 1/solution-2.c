#include<stdio.h>

int main ()
{
    int a[3];
    scanf("%d %d", &a[0], &a[1]);
    printf("%d\n", a[0] + a[1]);
    printf("%d\n", a[0] - a[1]);
    printf("%d\n", a[0] * a[1]);
    printf("%d\n", a[0] / a[1]);
}