#include<stdio.h>
#include<string.h>

int main(){
    
    char str[100];
    char ch='_';

    printf("enter your string");
    gets(str);

    int l=strlen(str);

    for(int i=0;i<l;i++){

        if(str[i]==' '){
            str[i]=ch;
        }
    }
    //str[i]='\0';
    printf("\n");

    printf("%s",str);

    return 0;

}