#include <stdio.h>

int binarysearch(int arr[], int search, int low, int high)
{

    int c = 0;
    int mid = (low + high) / 2;

    if (low <= high)
    {

        if (search == arr[mid])
        {
            c = 1;
        }
        else if (arr[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    else
    {
        return c = 0;
    }
}

int main()
{
    int arr[100];

    int x;
    int search;
    int temp;
    printf("enter thenumber of elements");
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {

        scanf("%d", &arr[i]);
    }

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

    printf("enter your search");
    scanf("%d", &search);

    int c = binarysearch(arr, search, 0, x - 1);

    if (c == 0)
    {
        printf("not exist");
    }
    else
    {
        printf("search is %d ", search);
    }
}