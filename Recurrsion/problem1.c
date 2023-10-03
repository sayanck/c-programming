// natural number in backward oder

#include<stdio.h>
int main(){
    int x;
    //int n=1;
    int nat;
    printf("enter the number");
    scanf("%d",&x);
    naturalno(x);
   // printf("the natural numbers are:\n",nat);
    return 0;
}

int naturalno(int x){

    int n=1;
   
    if(n<=x){

        printf("%d ,",x);
        naturalno(x-1);
    }
   
}