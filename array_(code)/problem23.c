#include <stdio.h>

int main()
{
    int a[100][100];
    int b[100][100];
    int c[100][100];

    int n;
    printf("enter the row and coloumn of the matrix \n");
    scanf("%d", &n);

    printf("elements of 1st matrix");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("elements of 2st matrix");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("1st matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }

    printf("2nd matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t", b[i][j]);
        }
        printf("\n");
    }
    int sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum = a[i][j] + b[i][j];
            c[i][j] = sum;
        }
    }
    printf("add is ::\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }
}