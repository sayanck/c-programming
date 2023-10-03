#include <stdio.h>
int main()
{
    int arr1[100];
    int arr2[100];
    int final[1200];
    int x;
    int y;
    printf("enter the length of str1");
    scanf("%d", &x);
    printf("enter the length of str2");
    scanf("%d", &y);
    printf("enter str1");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("enter str2");
    for (int i = 0; i < y; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int result = 0;
    for (int i = 0; i < x; i++)
    {
        final[result] = arr1[i];
        result++;
    }
    for (int j = 0; j < y; j++)
    {
        final[result] = arr2[j];
        result++;
    }
    printf("concentrated string :");
    for (int i = 0; i < result; i++)
    {
        printf("%d", final[i]);
    }
    for (int i = 0; i <= result; i++)
    {
        for (int j = i + 1; j < result; j++)
        {
            if (final[i] > final[j])
            {
                int temp;
                temp = final[i];
                final[i] = final[j];
                final[j] = temp;
            }
        }
    }
    printf("sorted string :");
    for (int i = 0; i < result; i++)
    {
        printf("%d\n", final[i]);
    }
    return 0;
}
