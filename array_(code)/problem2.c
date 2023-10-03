#include <stdio.h>
int main()
{
    int arr[100];
    int x;
    int sum = 0;

    printf("enter the no of elements");
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }

    int str;
    int end;

    printf("enter your start and end index for sum");
    scanf("%d %d", &str, &end);

    for (int i = str; i < end; i++)
    {
        sum = sum + arr[i];
    }
    printf("sum is %d ", sum);

    return 0;
}