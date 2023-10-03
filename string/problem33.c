#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    //int ch;
    printf("enter your string");
    gets(str);

    int l=strlen(str);

    for(int i=0;i<l;i++){
        if((str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')){
            str[i]=islower(str[i])?toupper(str[i]):tolower(str[i]);
        }
        
    }
    puts(str);
    return 0;
}