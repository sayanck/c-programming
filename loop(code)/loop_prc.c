#include <stdio.h>
int main()
{
    int i, j, k, n;
    int sum = 0;
    printf("Enter the valu of n \n");
    scanf("%d", &n);
    printf("The even numbers are:: \n");
    for (i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
            printf("%d \n", i);
        }
    }
    printf("The sum of these even numbers is ::");
    printf("%d", sum);
    return 0;
}