#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("enter the string");
    scanf("%s", str);
    int l;
    l=strlen(str);
    for(int i=l;i>=0;i--){

        printf("%c",str[i]);

    }
    return 0;

}