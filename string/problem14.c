#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    char str[100];

    printf("enter the string");
    gets(str);

    int a;
    a=strlen(str);
    int ch;

    printf("the string entered is %s\n",str);
    printf("the string in changed case is:\n");
    
    for(int i=0;i<a;i++){
    ch=islower(str[i])?toupper(str[i]):tolower(str[i]);
    putchar(ch);
    }
    return 0;
}
