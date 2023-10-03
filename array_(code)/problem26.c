#include <stdio.h>
int main()
{
    int a[100];
    int b[100];
    int c[100];
    int x, y;
    int n, i;
    printf("enter the length\n");
    scanf("%d", &n);

    printf("enter array 1\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the length 2\n");
    scanf("%d", &x);
    printf("enter array 2\n");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (int j = 0; j < x; j++)
    {
        c[n + j] = b[j];
    }
    printf("merged array\n");
    for (int i = 0; i < (x + n); i++)
    {
        printf("%d\n", c[i]);
    }
    printf("reversed array\n");
    for (int i = (x + n) - 1; i >= 0; i--)
    {
        printf("%d\n", c[i]);
    }

    return 0;
}