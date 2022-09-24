#include<stdio.h>
void drawStar(int x) {
    for (; x > 0; x--) {
        printf("*");
    }
}

void drawSpace(int x) {
    for (; x > 0; x--) {
        printf(" ");
    }
}

int main () {
    int num, line;
    printf("Enter number : ");
    scanf("%d", &num);
    num = (num * 2) - 1;
    for (line = 0; line < num/2; line ++)
    {
        drawSpace(line);
        drawStar(num - line * 2);
        printf("\n");
    }
    for (line = num/2; line >= 0; line--)
    {
        drawSpace(line);
        drawStar(num - line * 2);
        printf("\n");
    }
}