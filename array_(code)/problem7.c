#include <stdio.h>
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
    int temp;
    int i;
    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("second largest= %d \n", arr[x - 2]);
    printf("second smallest= %d", arr[i + 1]);
    return 0;
}