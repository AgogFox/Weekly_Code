#include<stdio.h>
void darwStar(int x) {
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
    for (line = 1; line <= num/2; line++) {
        darwStar(line);
        drawSpace(num - line * 2);
        darwStar(line);
        printf("\n");
    }
    darwStar(num);
    printf("\n");
    for (line = num/2; line >= 1; line--) {
        darwStar(line);
        drawSpace(num - line * 2);
        darwStar(line);
        printf("\n");
    }
}