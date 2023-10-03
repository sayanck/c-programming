#include<stdio.h>
int nat(int x){
    if(x==0){
        return 0;
    }
    else{
        return x + nat(x-1);
    }
}

int main(){
    int y;
    printf("enter thhe range");                                                                             
    scanf("%d", &y);
   printf("%d",nat(y));
    return 0;
}