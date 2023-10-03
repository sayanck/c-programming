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
    printf("enter the rows and columns of 1st matrix:\n");
    scanf("%d %d", &m, &n);
    printf("enter the elements of first matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the rows and columns of second matrix:\n");
    scanf("%d %d", &p, &q);
    printf("enter the elements of second matrix:\n");
    for (int i = 0; i < p; i++)
    {

        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("the element of 1st matrix is");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", &a[i][j]);
        }
        printf("\n");
    }
    printf("the element of 2nd matrix is");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d\t", &b[i][j]);
        }
        printf("\n");
    }

    return 0;
}