#include<stdio.h>
int digit(int i);
int main(){
    int i,dt;
    printf("enter the number");
    scanf("%d",&i);
    dt=digit(i);
    printf("no of digit in the number is %d",dt);
    //dt=digit(i);
    return 0;
}

int digit(int i){

    static int dt=0;

    if(i!=0){

        dt++;

        digit(i/10);
    }
    return dt;
}