#include<stdio.h>

int main ()
{
    FILE *src, *dest;
    char filename[100], c;

    printf("Input : ");
    scanf("%s",filename);

    src = fopen(filename, "r");

    printf("Output : ");
    scanf("%s", filename);

    dest = fopen(filename, "w");

    if (src == NULL || dest == NULL)
    {
        printf("Error opening file.");
        return 1;
    }
    c = fgetc(src);
    while (c != EOF)
    {
        fputc(c, dest);
        c = fgetc(src);
    }
    fclose(src);
    fclose(dest);
    return 0;
}