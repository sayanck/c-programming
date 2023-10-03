#include <stdio.h>

void bestoffive(int marks[])
{
    int temp;

    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (marks[i] < marks[j])
            {
                temp=marks[i];
                marks[i]=marks[j];
                marks[j]=temp;
            }
        }
    }
    printf("best of 5\n");
    for(int i=0;i<5;i++){
        printf("subject %d is-----%d\n",i+1,marks[i]);
    }
}

struct studentinfo
{
    int slno;
    int class;
    int marks[10];
    char name[100];
    int phoneno;
};

int main()
{

    struct studentinfo s1[100];
    int x;
    int search;

    printf("enter your number of details\n");
    scanf("%d", &x);

    printf("enter the details\n");
    for (int i = 0; i < x; i++)
    {
        printf("enter slno--\n");
        scanf("%d", &s1[i].slno);

        printf("enter class--\n");
        scanf("%d", &s1[i].class);

        printf("enter name--\n");
        scanf("%s", s1[i].name);

        printf("enter phone no--\n");
        scanf("%d", &s1[i].phoneno);

        printf("entere the marks--\n\t");
        for (int j = 0; j < 7; j++)
        {
            printf("marks subject %d\n", j + 1);
            scanf("%d",&s1[i].marks[j]);
        }
    }

    printf("enter the search--\n");
    scanf("%d", &search);

    for (int i = 0; i < x; i++)
    {
        if (s1[i].slno == search)
        {
            printf("slno---%d", s1[i].slno);
            printf("class---%d", s1[i].class);
            printf("name---%s", s1[i].name);
            printf("phone number---%d", s1[i].phoneno);
            printf("marks are:\n");

            bestoffive(s1[i].marks);
        }
    }


    return 0;
}
