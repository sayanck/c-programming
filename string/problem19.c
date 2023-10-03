#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int length=0;
    int min_length=999999;
    char min_str[100];
    int index;
    int i;

    printf("enter the string");
    gets(str);

    int l=strlen(str);

    for(int i=0;  i<l; i++){
        if(str[i]!=' ' && str[i]!='\0'){

            length++;
            continue;

        }

        if(str[i]<min_length){
            min_length = str[i];
            index=(i-length);
        }
        length=0;
    }

    for(i=0; i<min_length; i++){
        min_str[i]=str[index+i];
    }
    min_str[i]='\0';

    printf("%s",min_str);

    return 0;

}