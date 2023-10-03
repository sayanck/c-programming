#include <stdio.h>
int main()
{
    int a[10][10];
    int b[10][10];
    int c[10][10];
    int m;
    int n;
    int p;
    int q;
    int sum; 

    // entering the no of rows and columns & element of 1st and 2nd matrix

    printf("enter first row and columns:\n");
    scanf("%d %d", &m, &n);
    printf("enter the elements of first matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter second rows and columns:\n");
    scanf("%d %d", &p, &q);
    printf("enter the second element of second matrix:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // printing 1st and 2nd matrix

    printf("the first matrix is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("the second matrix is:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // Multiplying the matrix

    if (n != p)
    {
        printf("the multiplication is invalid");
    }
    else
    {
        printf("The multiplication of matrix is:\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                sum = 0;
                for (int k = 0; k < m; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                // c[i][j]=sum;
                c[i][j] = sum;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}