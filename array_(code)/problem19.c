#include <stdio.h>

void findele(int a[])
{
    int sum = 50;
    int cursum = 0;
    for (int i = 0; i < 10; i++)
    {
        cursum = 0;
        for (int j = 0; j < 10; j++)
        {
            cursum += a[j];

            if (cursum == sum)
            {
                printf("found in index :: %d %d\n", i, j);
                printf("elements are::");
                for (int k = i; k < j; k++)
                {
                    printf("--%d--", a[k]);
                }
                return;
            }
        }
    }
    printf("not found");
}

int main()
{
    int a[100];
    int x, y, z, m, n;
    printf("enter the elements");
    for (int i = 0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array is:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
    findele(a);
    int sum = 50;
    int cursum = 0;
    /* for(int i=0;i<10;i++){
         cursum=0;
         for(int j=0;j<10;j++){
             cursum+=a[j];
         }
         if(cursum==sum){
             printf("%d %d",i,j);
             return;
         }
     }*/

    return 0;
}