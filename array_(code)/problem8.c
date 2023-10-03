#include <stdio.h>
void pivotelement(int arr[], int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (arr[j] < arr[i])
            {
                printf("%d ", arr[j]);
                return;
            }
        }
    }
}
int main()
{
    int arr[100];
    int x;
    printf("enter the length");
    scanf("%d", &x);
    printf("enter the array");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("!st pivot element");
    pivotelement(arr, x);
    return 0;
}