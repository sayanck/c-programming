#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int lcs(char *x, char *y, int m, int n)
{

    if (m < 0 || n < 0)
    {
        return 0;
    }
    else if (x[m] == y[n])
    {
      //  printf("%c",x[m]);
        return 1 + lcs(x, y, m - 1, n - 1);
    }
    else
    {
        return max(lcs(x, y, m, n - 1), lcs(x, y, n, m - 1));
    }
}

int main()
{
    char str1[100];
    char str2[100];

    printf("enter your 2 strings");

    gets(str1);
    gets(str2);

    int l = strlen(str1) - 1;
    int m = strlen(str2) - 1;

    printf("%d", lcs(str1, str2, l, m));
    return 0;
}