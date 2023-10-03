#include <stdio.h>
#include <string.h>

void longstsubstrng(char *x, char *y)
{

    int m = strlen(x);
    int n = strlen(y);

    // char final[100];

    int length = 0;
    int finl_len = 0;
    int row = 0;
    int column = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            while (i + length < m && j + length < n && x[i + length] == y[j + length])
            {
                length++;
            }
            if (length > finl_len)
            {
                finl_len = length;
                row = i;
                column = j;
            }
        }
    }

    for (int i = row; i < (row + finl_len); i++)
    {

        printf("%c", x[i]);
    }
    printf("\n");
}

int main()
{
    char str1[100];
    char str2[100];

    printf("enter the strings:");

    gets(str1);
    gets(str2);

    longstsubstrng(str1, str2);

    return 0;
}