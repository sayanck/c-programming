#include <stdio.h>
int main()
{
    int a[100][100];
    int x, y, z, m, n, p, q;
    int marks, avg, count = 0;
    printf("enter the marks\n");
    for (int i = 0; i < 6; i++)
    {
        printf("marks for student %d\n", i + 1);
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf(" marks\n");
    for (int i = 0; i < 6; i++)
    {
        printf("marks for student %d\n", i + 1);
        marks = 0;
        for (int j = 0; j < 5; j++)
        {
            printf("%d     , ", a[i][j]);
            marks += a[i][j];
            avg = marks / 5;
        }
        printf("\n");
        printf("average is %d\n", avg);
        printf("\n");

        if (avg > 50)
        {
            count++;
        }
    }
    printf("no of studnt above avg 50 is %d\n", count);
    int avg_sub;
    int marks_sub=0;
    for(int i=0;i<5;i++){
        marks_sub=0;
        for(int j=0;j<6;j++){
            marks_sub+=a[j][i];
            avg_sub =marks_sub/6;
        }
        printf("avg of sub %d is %d\n",i+1,avg_sub);
    }
    return 0;
}