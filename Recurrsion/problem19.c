#include <stdio.h>

void reverse(int *arr, int n)
{
    int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
{
    int x;
    int arr[100];
    printf("enter the size of array:\n");
    scanf("%d", &x);
    printf("enter the elements of array:\n");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(arr, x);
    printf("the reverse array are:\n");
    for (int i = 0; i < x; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}