#include<stdio.h>
float farenhite(int c);


int main(){
    int c;
    printf("enter the temperature in celcius \n");
    scanf("%d",&c);
    printf("the temperature in farenhite is %f",farenhite(c));
    return 0;
}

float farenhite(int c){
    float result;
    result=(float)((c*9/5)+32);
    return result;
}
