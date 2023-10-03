#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    char search[100];

    int a;
    int b;
    int j;

    printf("enter the string");
    gets(string);

    printf("enter the search string");
    gets(search);

    a=strlen(string);
    b=strlen(search);

    for(int i=0; i<a; i++){
        for(j=0; j<b; j++){
            if(string[i+j]!=search[j]){
                break;
            }
        }
        if(j==b){
            printf("searched string found at index  %d\n",i+1);

        }
       
    }

    if(j!=b){
        printf("search invalid");
    }

    return 0;
}