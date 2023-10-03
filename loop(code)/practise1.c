#include<stdio.h>
float avg(int a , int b , int c);

int main(){
    int a,b,c;
    printf("enter a \n");
    scanf("%d",&a);
    printf("enter b \n");
    scanf("%d",&b);
    printf("enter c \n");;
    scanf("%d",&c);
    printf("thr avg of %d,%d,%d is %f",a,b,c,avg(a,b,c));
    return 0;
}
float avg(int a , int b , int c){
float result;
result=(float)(a+b+c)/3;
return result;
}