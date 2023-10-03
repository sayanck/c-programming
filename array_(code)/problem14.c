#include <stdio.h>
int main()
{
    int a[10][10];
   // int b[10][10];
    int c[10][10];
    int a1;
    int a2;
   // int b1;
   // int b2;
    int trasnspose; 

    
    printf("enter first row and columns:\n");
    scanf("%d %d", &a1, &a2);
    printf("enter the elements of first matrix:\n");
    for (int i = 0; i < a1; i++)
    {
        for (int j = 0; j < a2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
   
    printf("the first matrix is:\n");
    for (int i = 0; i < a1; i++)
    {
        for (int j = 0; j < a2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    // transpose
    for(int i=0;i<a2;i++){
        for(int j=0;j<a1;j++){
            c[i][j] =a[j][i];
        }
    }
    printf("transposeis :\n");
    for(int i=0;i<a2;i++){
        for(int j=0;j<a1;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
   


    
}