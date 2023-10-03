#include<stdio.h>
int main(){
    int x;
    int sum;
    printf("enter the number");
    scanf("%d",&x);
    sum=sumofnat(x);
    printf("the sum of natural numbers is %d",sum);
    return 0;
}

sumofnat(int x){

    if(x==1){
        return 1;
    }
    else{

        return x+sumofnat(x-1);
    }
}