#include <stdio.h>
#include <math.h>
int anst(int x, int dt);
int multi(int x, int dt);
// int digit(int x);
// int y;

int main()
{
    int x;
    // int y;
    int dt = 0;
    printf("enter the number");
    scanf("%d", &x);
    // printf("enter the no  of digit");
    // scanf("%d",&y);
    while (x != 0)
    {
        dt++;
        x = x / 10;
    }
    if (anst(x, dt) == 1)
    {
        printf("this is angstrome");
    }
    else
    {
        printf("the no  is not");
    }
    return 0;
}
int anst(int x, int dt)
{
    if (x == multi(x, dt))
    {
        return 1;
    }

    return 0;
}

int multi(int x, int dt)
{
    static int sum = 0;
    int k;
    // int dt=digit(x);

    if (x != 0)
    {
        k = x % 10;
        sum = sum + (pow(k, dt));
        multi(x / 10, dt);
    }
    else
    {
        return sum;
    }
}
