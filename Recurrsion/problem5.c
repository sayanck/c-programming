#include <stdio.h>
int sumofdigit(int i);
int sum;

int main()
{
    int i;
    printf("enter the value of the number");
    scanf("%d", &i);

    sum = sumofdigit(i);
    printf("the sum of the digit of the enterd number is %d", sum);

    return 0;
}

int sumofdigit(int i)
{

    // static int dt=0;
    if (i == 0)
    {

        return 0;
    }
    else
    {
        return (i % 10) + sumofdigit(i / 10);
    }
}