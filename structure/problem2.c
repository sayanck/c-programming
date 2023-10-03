#include <stdio.h>
#include <string.h>
struct studentinfo
{
    int slno;
    char name[100];
    char address[100];
    int phone;
};
int main()
{

    int x;
    int search;

    printf("enter no data");
    scanf("%d", &x);

    struct studentinfo s1[100];

    for (int i = 0; i < x; i++)
    {
        printf("enter the sl.no\n");
        scanf("%d", &s1[i].slno);
        printf("enter the name\n");
        scanf("%s", s1[i].name);
        printf("enter the address\n");
        scanf("%s", s1[i].address);
        printf("enter the phone number\n");
        scanf("%d", &s1[i].phone);
    }
    printf("enter your search sl.no\n");
    scanf("%d", &search);

    for (int i = 0; i < x; i++)
    {
        if (s1[i].slno == search)
        {
            printf("sl no--%d", s1[i].slno);
            printf("name--%s", s1[i].name);
            printf("address--%s", s1[i].address);
            printf("phone no--%d", s1[i].phone);
        }
        break;
    }
    return 0;
}