#include<stdio.h>

int main()
{
    int arr[100];
    int x;
    int len;
    int max = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &x);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are:\n");
    for (int i = 0; i < x; i++)
    {
        printf("%d ", arr[i]);
    }

    // Find the largest number with frequency greater than 1
    for (int i = 0; i < x; i++)
    {
        len = 0;
        for (int j = 0; j < x; j++)
        {
            if (arr[i] == arr[j])
            {
                len++;
            }
        }
        if (len >= 2 && arr[i] > max)
        {
            max = arr[i];
        }
    }

    if (max == 0)
    {
        printf("\nThere is no number with a frequency greater than 1.\n");
    }
    else
    {
        printf("\nThe largest number with a frequency greater than 1 is: %d\n", max);
    }

    return 0;
}
