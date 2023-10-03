#include <stdio.h>
int main()
{
    char str[100];
    printf("enter the string");
    scanf("%s", str);
    int l = 0;

    while (str[l] != '\0')
    {
        l++;
    }
    printf("the length of the string is %d", l);

    return 0;
}