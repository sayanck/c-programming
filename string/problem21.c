#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(){

    char str[100];
    int cha;

    printf("enter tthe string");
    gets(str);

    int l=strlen(str);

    for(int i=0;i<l;i++){

        cha=isupper(str[i])?tolower(str[i]):toupper(str[i]);

        putchar(cha);
    }

    return 0;


}

