#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    char str[100];
    int j;
    int freq=0;

    printf("enter the string");
    gets(str);

    int l=strlen(str);

    for(int i=0;i<l;i++){

        if(ispunct(str[i])){

            freq++;

        }

    }
    printf("%d",freq);
    return 0;
}