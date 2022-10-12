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
    char buffer[10];

    for(;;) {
        size_t r;
        r =  fread(buffer, 1, 10, src);
        if (r == 0) {
            if (ferror(src)) {
                puts("Error reading from source");
            }

            break; //we're done
        }
        if (fwrite(buffer, 1, r, dest) != r) {
            puts("Error writing to destination");
            break;
        }
    }
}