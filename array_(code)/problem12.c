#include <stdio.h>
#include <string.h>
void longpalindrome(char *join, char *rev)
{
    int x;
    int y;
    char pali[100];
    x = strlen(join);
    y = strlen(rev);
    int length = 0;
    int long_length = 0;
    int row = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            while (i + length < x && j + length < y && join[i + length] == rev[j + length])
            {
                length++;
            }
            if (length > long_length)
            {
                long_length = length;
                row = i;
            }
        }
    }
    printf("palindrome is ");
    for (int i = row; i < row + long_length; i++)
    {
        printf("%c", join[i]);
    }
}
int main()
{
    char str1[100];
    char str2[100];
    char join[100];
    char rev[100];
    int j;
    int x;
    int k;
    printf("enter str1");
    gets(str1);
    printf("enter str2");
    gets(str2);
    int l;
    int m;
    l = strlen(str1);
    m = strlen(str2);
    x = 0;
    for (int i = 0; i < l; i++)
    {
        join[x] = str1[i];
        x++;
    }
    for (int i = 0; i < m; i++)
    {
        join[x] = str2[i];
        x++;
    }
    join[x] = '\0';
    printf("joined is %s\n", join);
    k = strlen(join);
    int count = k - 1;
    for (j = 0; j < k; j++)
    {
        rev[j] = join[count];
        count--;
    }
    rev[j] = '\0';
    printf("rev is %s\n", rev);
    longpalindrome(join, rev);
    return 0;
}