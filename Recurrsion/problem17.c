#include <stdio.h>
void copystring(char[], char[], int);
int main()
{
    char strng1[100];
    char strng2[100];
    printf("enter the chracter you want to copy:\n");
    scanf("%s", strng1);
    copystring(strng1, strng2, 0);
    printf("the string is successfully copied \n");
    printf("the input string is %s \n", strng1);
    printf("the copied string is %s \n", strng2);
    return 0;
}
void copystring(char strng1[], char strng2[], int count)
{
    if (strng1[count] == '\0')
    {
        return;
    }
    else
    {
        strng2[count] = strng1[count];
        return copystring(strng1, strng2, count + 1);
    }
}