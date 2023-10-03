#include <stdio.h>
int maxele(int[]);
int n;
int main()
{
    // int  n;
    int hstno;
    int arr[100];
    printf("enter the size");
    scanf("%d", &n);
    printf("insert the elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    maxele(arr);
    printf("the highest element in the array is %d", arr[0]);
    return 0;
}

int maxele(int arr[])
{
    static int i = 1;
    // hstno=-9999;
    if (i < n)
    {

        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
        i++;
        maxele(arr);
    }
    return arr[0];
}