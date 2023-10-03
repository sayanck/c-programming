#include <stdio.h>
int main()
{
    int a[100][100];
    int b[100];
    int c[100];
    int k = 0;
    int l = 0;

    int n;
    printf("enter the length");
    scanf("%d", &n);

    printf("enter thr array");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter thr array\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                b[k] = a[i][j];
                k++;
            }
            else
            {
                c[l] = a[i][j];
                l++;
            }
        }
    }
    printf("odd elements\n");
    for (int x = 0; x < k; x++)
    {
        printf("%d\n", b[x]);
    }
    printf("even elements\n");
    for (int x = 0; x < l; x++)
    {
        printf("%d\n", c[x]);
    }
    return 0;
}