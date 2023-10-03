#include<stdio.h>
#include<string.h>

int main(){
    int i;
    int l;
    int p;

    char str[100];
    char str1[100];

    printf("enter the string \n");
    scanf("%s",str);

    printf("enter the lenngth of string  to be extracted");
    scanf("%d",&l);

    printf("enter the startig index of the string  to be extracted");
    scanf("%d",&p);

    int c=0;

    while(c<l){
        str1[c]=str[p+c+1];
        c++;
    }
    str1[c]='\0';
    printf("the ext string is %s",str1);

    return 0;

    
}