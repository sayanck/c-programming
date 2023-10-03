#include <stdio.h>
int main()
{

    int arr1[100];

    int arr2[100];

    int x;
    
    int len=0;

    printf("enter the number of elements in the array::\n");
    scanf("%d", &x);

    printf("enter arr1::\n");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("enter arr2:::\n");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (arr1[i] == arr2[j])
            {
                len++;
            }
        }
    }
    if (len == x || len > x)
    {
        printf("array is same");
    }
    else
    {
        printf("array is not same");
    }
    return 0;
}
