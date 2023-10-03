#include <stdio.h>
int main()
{
    int x1, x2,prime;
   // int prime =0;
    printf("enter the numbers:\n");
    scanf("%d %d", &x1, &x2);
    //prime=0;
    printf("the prime number are:\n");
    for (int j = x1; j < x2; j++)
    {
        //int k = x1;
        prime=0;
        for (int i = 2; i < j; i++)
        {

            if (j % i == 0)
            {

                prime = 1;
                break;
            }
          // break;
        }
        if(prime==0){
            printf("%d\n",j);
        }
    }

    return 0;
}