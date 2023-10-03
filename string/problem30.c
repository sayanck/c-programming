#include<stdio.h>
#include<string.h>

int main(){

    char str[100];

    printf("enter your string");
    gets(str);

    int l=strlen(str);
    int count=1;

    for(int i=0;i<l;i++){
        count =1;
        for(int j=i+1;j<l;j++){
            if(str[i]==str[j] && str[i]!=' '){
                count++;
                str[j]='0';
            }
        }
        if(count>1&&str[i]!='0'){
            printf("%c",str[i]);
        }
    }
    return 0;
}