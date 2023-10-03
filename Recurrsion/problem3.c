#include<stdio.h>

int x;

int main(){

    static int num1=0;
    static int num2=1;
    printf("enter the range");
    scanf("%d",&x);
    printf("0 ,1 ,");
    fibanoc(num1,num2);
   

    return 0;

}



fibanoc(num1,num2){

    int f;
    static int i=1;

   if(i==x){

    return 0;
   }
   else{
    f=num1+num2;
    num1=num2;
    num2=f;
    printf("%d ,",f);

    i++;
    fibanoc(num1,num2);
   }
    return 0;
}