#include <stdio.h>

int ascendingorder(int arr[], int x)
{

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
    printf(" ascending is::");
    for (int i = 0; i < x; i++)
    {
        printf("%d \n", arr[i]);
    }
}

int descendingorder(int arr[], int x)
{

    int temp;

    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("descending is::");
    for (int i = 0; i < x; i++)
    {
        printf("%d \n", arr[i]);
    }
}

int main()
{
    int arr[100];

    int x;

    printf("enter the no elments");
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    int c;
    printf("for ascending 1 and for desending 2::");
    scanf("%d", &c);

    if (c == 1)
    {
        ascendingorder(arr, x);
    }
    else if (c == 2)
    {
        descendingorder(arr, x);
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}