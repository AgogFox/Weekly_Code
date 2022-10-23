#include <stdio.h>
#include<ctype.h>
#include <string.h>

char *alphamorse[] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", /* A - J */
        "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", /* K - T */
        "..-", "...-", ".--", "-..-", "-.--", "--.." /* W - Z */
};

void main()
{
    char str[25];
    printf("Enter any string to convert to morse code:\n");
    scanf("%s", str);
    for (int i = 0, len = strlen(str); i < len; i++)
    {   
        printf("%s", alphamorse[toupper(str[i]) - 65]);
    }
}