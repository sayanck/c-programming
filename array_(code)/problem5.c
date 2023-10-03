#include <stdio.h>

void findindex(int arr[], int sum, int x)
{
    int curr_sum = 0;
    for (int i = 0; i < x; i++)
    {
        curr_sum = 0;
        for (int j = i; j < x; j++)
        {
            curr_sum = curr_sum + arr[j];
            if (sum == curr_sum)
            {
                printf("%d %d", i, j);
                return;
            }
        }
    }
    printf("not found");
}
int main()
{
    int arr[100];
    int x;

    printf("enter the no of elements");
    scanf("%d", &x);
    printf("enter the elements");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum;
    printf("enter the sum");
    scanf("%d", &sum);
    findindex(arr, sum, x);
    return 0;
}