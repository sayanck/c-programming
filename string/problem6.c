#include <stdio.h>

// int compare(char[], char[]);
int compare(char[], char[]);

int main()
{
    char str1[100];
    char str2[100];
    int check;

    printf("enter the first string:\n");
    scanf("%s", str1);

    printf("enter the second string:\n");
    scanf("%s", str2);

    check = compare(str1, str2);

    if (check == 0)
    {
        printf("both the strings are equal");
    }
    else
    {
        printf("the strings aree not equal");
    }

    return 0;
}

int compare(char str1[], char str2[])
{

    int i = 0;
    int flag = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {

        if (str1[i] != str2[i])
        {

            flag = 1;
            break;
        }
        else
        {
            i++;
        }
    }
    if (flag == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
