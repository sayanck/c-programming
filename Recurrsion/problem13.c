#include <stdio.h>
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * power(a, (b - 1));
    }
}
int main()
{
    int a, b;
    int result;
    printf("enter the number:\n");
    scanf("%d", &a);
    printf("enter the power of %d\n", a);
    scanf("%d", &b);
    result = power(a, b);
    printf("the result of %d to the power %d is = %d\n", a, b, result);
    return 0;
}