#include <stdio.h>

int main()
{
    int arr[100];
    int x;
    printf("Enter number of elements: ");
    scanf("%d", &x);
    printf("Enter elements: ");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp;
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
    printf("Sorted array: ");
    for (int i = 0; i < x; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\nMissing elements: ");
    for (int i = 0; i < x - 1; i++)
    {
        int t = arr[i];
        while (t < arr[i+1] - 1)
        {
            t++;
            printf("%d ", t);
        }
    }
    return 0;
}
