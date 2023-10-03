#include <stdio.h>
void evenandodd(int str, int x);
int main()
{
    int x;
    printf("enter the  range from 1 to get the odd and even numbers::\n");
    scanf("%d", &x);
    printf("the even nnumbers from 1 to %d are::\n", x);
    evenandodd(2, x);
    printf("\n");
    printf("the odd numbers from 1 to %d are::\n", x);
    evenandodd(1, x);
    return 0;
}
void evenandodd(int str, int x)
{
    if (str > x)
    {
        return;
    }
    else
    {
        printf("%d ,", str);
        return evenandodd((str + 2), x);
    }
}