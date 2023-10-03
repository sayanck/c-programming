#include<stdio.h>
#include<string.h>

int main(){

    char ch;

    printf("enter the string");
    scanf("%s",&ch);

    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        printf("the entered character is a alphabate");
    }
    else{
        printf("the entered character is not a alphabate it is a no");
    }

    return 0;


}