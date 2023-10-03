#include<stdio.h>
int main(){
    char str[100];
    printf("enter the string:\n");
    scanf("%s",str);

    int l=0;

    while(str[l]!='\0'){

        printf("%c  ",str[l]);
        l++;
    }

}