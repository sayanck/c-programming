#include <stdio.h>

void sitarrange(int *arr, int l, int t, int x)
{

    for (int i = 0; i < x; i++)
    {

        if (i == 0)
        {
            if (arr[i] == 0 && arr[i + 1] == 0)
            {
                t++;
                arr[i] = 1;
                printf("%d at %d\n", t, i);
                if (t == l)
                {
                    return;
                }
            }
        }
        else if (i == x - 1)
        {
            if (arr[i] == 0 && arr[i - 1] == 0)
            {
                t++;
                arr[i] = 1;
                printf("%d at %d\n", t, i);
                if (t == l)
                {
                    return;
                }
            }
        }
        else
        {
            if (arr[i] == 0 && arr[i + 1] == 0 && arr[i - 1] == 0)
            {
                t++;
                arr[i] = 1;
                printf("%d at %d\n", t, i);
                if (t == l)
                {
                    return;
                }
            }
        }
    }
}

int main()
{
    int arr[100];
    int x;

    printf("Enter the length: ");
    scanf("%d", &x);

    printf("Enter the array: ");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }

    int l;
    printf("Enter the number of students: ");
    scanf("%d", &l);

    int check = 0;

    for (int i = 0; i < x; i++)
    {
        if (arr[i] == 0 && arr[i+1]==0)
        {
            check++;
        }
    }

    if (l <= check)
    {
        int t = 0;
        sitarrange(arr, l, t, x);
    }
    else
    {
        printf("Not enough seats available for all students.");
    }

    return 0;
}
