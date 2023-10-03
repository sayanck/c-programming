#include <stdio.h>
int binarySearch(int *, int, int, int, int);
int main()
{
    int arr[1000], x, ser, low, hg, c;
    printf("enter range: \n");
    scanf("%d", &x);
    printf("enter the numbers:\n");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter your no:\n");
    scanf("%d", &ser);
    low = 0;
    hg = x - 1;
    c = binarySearch(arr, x, ser, low, hg);
    if (c == 0)
    {
        printf("no such no exist");
    }
    else
    {
        printf("yes the number exist");
    }
    return 0;
}
int binarySearch(int arr[], int x, int ser, int low, int hg)
{
    int mid, c = 0;
    mid = (low + hg) / 2;
    if (low <= hg)
    {
        if (arr[mid] == ser)
        {
            c = 1;
        }
        else if (arr[mid] < ser)
        {
            low = mid + 1;
        }
        else
        {
            hg = mid - 1;
        }
    }
    else
    {
        return c = 0;
    }
}