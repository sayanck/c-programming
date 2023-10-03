#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    //char str[100];
    char character;

    printf("enter your string");
    //gets(str);
    scanf("%c",character);

    if(isxdigit(character)){
        printf("it is hexadecimal");
    }
    else{
        printf("it is not hexadecimal");
    }
    return 0;
}
