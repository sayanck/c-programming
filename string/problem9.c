#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    int i,j;
    //int n=strlen(string);
    //char temp;

    printf("enter the string");
    scanf("%s",string);

    int n=strlen(string);
    char temp;

    printf("string before sort is %s :",string);

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(string[i]>string[j]){

                temp=string[i];
                string[i]=string[j];
                string[j]=temp;

            }
        }
    }
    printf("sort string is: %s",string);

    return 0;
    
}