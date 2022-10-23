#include<stdio.h>
#include<ctype.h>
#include<string.h>

void main()
{
  char str[25],str1[100];

  printf("Enter any string to convert to morse code:\n");
  scanf("%s", str);

  int j = 0;
  for(int i = 0, len = strlen(str); i <= len; i++)
  {
    switch(toupper(str[i]))
    {
      case 'A':
        str1[j++]='.';
        str1[j]='-';
        break;

      case 'B':
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='.';
        str1[j]='.';
        break;

      case 'C':
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='-';
        str1[j]='.';
        break;

      case 'D':
        str1[j++]='-';
        str1[j++]='.';
        str1[j]='.';
        break;

      case 'E':
        str1[j]='.';
        break;

      case 'F':
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='-';
        str1[j]='.';
        break;

      case 'G':
        str1[j++]='-';
        str1[j++]='-';
        str1[j]='.';
        break;

      case 'H':
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j]='.';
        break;

      case 'I':
        str1[j++]='.';
        str1[j]='.';
        break;

      case 'J':
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='-';
        str1[j]='-';
        break;

      case 'K':
        str1[j++]='-';
        str1[j++]='.';
        str1[j]='-';
        break;

      case 'L':
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='.';
        str1[j]='.';
        break;

      case 'M':
        str1[j++]='-';
        str1[j]='-';
        break;

      case 'N':
        str1[j++]='-';
        str1[j]='.';
        break;

      case 'O':
        str1[j++]='-';
        str1[j++]='-';
        str1[j]='-';
        break;

      case 'P':
        str1[j++]='.';
        str1[j++]='-';
        str1[j++]='-';
        str1[j]='.';
        break;

      case 'Q':
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='.';
        str1[j]='-';
        break;

      case 'R':
        str1[j++]='.';
        str1[j++]='-';
        str1[j]='.';
        break;

      case 'S':
        str1[j++]='.';
        str1[j++]='.';
        str1[j]='.';
        break;

      case 'T':
        str1[j]='-';
        break;

      case 'U':
        str1[j++]='.';
        str1[j++]='.';
        str1[j]='-';
        break;

      case 'V':
        str1[j++]='.';
        str1[j++]='.';
        str1[j++]='.';
        str1[j]='-';
        break;

      case 'W':
        str1[j++]='.';
        str1[j++]='-';
        str1[j]='-';
        break;

      case 'X':
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='.';
        str1[j]='-';
        break;

      case 'y':
        str1[j++]='-';
        str1[j++]='.';
        str1[j++]='-';
        str1[j]='-';
        break;

      case 'Z':
        str1[j++]='-';
        str1[j++]='-';
        str1[j++]='.';
        str1[j]='.';
        break;
    }
    j++;
  }
  str1[j-1]='\0';
  printf("%s", str1);
}