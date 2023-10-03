#include <stdio.h>
void arrayelement(int arr[], int st, int n);
int main()
{
    int n;
    int arr[100];
    printf("enter the size:\n");
    scanf("%d", &n);
    printf("input the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("the array elements are:\n");
    arrayelement(arr, 0, n);
    return 0;
}
void arrayelement(int arr[], int st, int n)
{
    if (st >= n)
    {
        return;
    }
    else
    {
        printf("%d\n", arr[st]);
        arrayelement(arr, st + 1, n);
    }
}