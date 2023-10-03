#include<stdio.h>
int main(){
    int a[10][10];
    int b[10][10];

    int a1;
    int a2;

    int sum=0;

    printf("enter the row of matrix");
    scanf("%d",&a1);
    printf("enter the column of matrix");
    scanf("%d",&a2);
    printf("enter the elements of matrix");
    for(int i=0;i<a1;i++){
        for(int j=0;j<a2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //determinant

}