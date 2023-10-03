#include <stdio.h>
int main()
{
    int a[100];
    int x, y;
    int n, i;
    printf("enter the length");
    scanf("%d", &n);

    printf("enter array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("arrray is");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    int temp;
    temp = a[1];
    a[1] = a[n - 2];
    a[n - 2] = temp;

    printf("sorted array \n");
    for (int i = 0; i < n; i++)
    {

        printf("%d\n", a[i]);
    }

    return 0;
}