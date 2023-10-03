#include <stdio.h>
#include <string.h>
#include <ctype.h>
char checkcaps(char *);
int main()
{
    char str[20];
    int cap;
    printf("enter your words:\n");
    scanf("%s", str);
    cap = checkcaps(str);
    if (cap == 0)
    {
        printf("no caps exist");
    }
    else
    {
        printf("the first caps that exist is %c", cap);
    }
    return 0;
}
char checkcaps(char *str)
{
    static int i = 0;
    if (i < strlen(str))
    {
        if (isupper(str[i]))
        {
            return str[i];
        }
        else
        {
            i = i + 1;
            return checkcaps(str);
        }
    }
    else
    {
        return 0;
    }
}