#include<stdio.h>
int fib(int z){
    if(z==1){
        return 0;
    }
    else if(z==2){
        return 1;
    }
    else{
        return fib(z-1)+fib(z-2);
    }
}

//int fib(int y, int z){}

int main(){
    int x;
    printf("enter the range");
    scanf("%d", &x);
    for(int i=1; i<x; i++){
        printf("%d \n",fib(i));
    }
    return 0;
}

