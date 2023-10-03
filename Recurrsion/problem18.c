#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverstr(char str1[], int len, int h)
{
    if (len < h)
    {
        swap(&str1[len], &str1[h]);
        reverstr(str1, len + 1, h - 1);
    }
}

int main()
{
    char str1[100];
    printf("enter  the string: \n");
    scanf("%s", str1);
    // printf("the string is: %s\n",str);
    reverstr(str1, 0, strlen(str1) - 1);
    printf("the reverse string is: %s\n", str1);
    return 0;
}