#include <stdio.h>
int main()
{
    int a[100][100];
    int b[100][100];
    int c[100][100];

    int x, y, m, n;
    printf("enter r and c of 1st matrix");
    scanf("%d %d", &x, &y);

    printf("enter r and c of 2nd matrix");
    scanf("%d %d", &m, &n);

    printf("elements of 1st matrix");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("elements of 2st matrix");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("1st matrix\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }

    printf("2nd matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t", b[i][j]);
        }
        printf("\n");
    }

    if (y == n)
    {
        int sum = 0;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sum = 0;
                for (int k = 0; k < n; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }
    }
    else
    {
        printf("not possible");
    }

    printf("multiply\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}