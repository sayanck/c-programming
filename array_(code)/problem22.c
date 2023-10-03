#include <stdio.h>
int main()
{
    int a[100][100];

    int len = 0;
    printf("enter the array");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] != 0)
            {
                len++;
            }
        }
    }
    printf("non zero eleements are %d", len);
}