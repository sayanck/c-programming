#include <stdio.h>
#include <string.h>

void lngpalindro(char *str, char *rvr)
{

    int x = strlen(str);
    int y = strlen(rvr);

    int length = 0;
    int long_len = 0;
    int row = 0;
    int column = 0;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            while (i + length < x && j + length < y && str[i + length] == rvr[j + length])
            {
                length++;
            }
            if (length > long_len)
            {
                long_len = length;
                row = i;
            }
        }
    }
    for (int i = row; i < row + long_len; i++)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    char str[100];
    char rvr[100];
    // int j=0;
    printf("enter your string");

    gets(str);

    int l = strlen(str);

    int count = l - 1;
    int i;

    for (i = 0; i < l; i++)
    {

        rvr[i] = str[count];
        count--;
    }
    rvr[i] = '\0';
    // printf("%s",rvr);

    lngplaindro(str, rvr);

    return 0;
}