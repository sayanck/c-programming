#include<stdio.h>

int fact;

int main(){
    int x;
    printf("enter the number");
    scanf("%d",&x);
    fact=factorial(x);
    printf("the facttorial of the number is %d",fact);
    return 0;
}

factorial(x){
    if (x==1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}