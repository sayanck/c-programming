#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int j;

    printf("enter the string");
    gets(str);

    int l=strlen(str);

    for(int i=0;str[i]!='\0';i++){
        while(str[i]==' '){
            for(j=i;j!='\0';j++){
                str[j]=str[j+1];
            }
            str[j]='\0';
        }
    }
    printf("sorted is %s",str);
    return 0;
}