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
    //printf("arrray is");
    int sum=0;
    for (i = 0; i < n; i++)
    {
       sum+=a[i]*a[i];
    }
    printf("sum of square is %d", sum);
    return 0;
}