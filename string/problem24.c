#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    int freq[200]={0};
    int max_length=0;
    char name;

    printf("enter the string");
    gets(str);

    int l=strlen(str);

    for(int i=0;i<l;i++){
        freq[str[i]]++;
    }
    for(int i=0;i<200;i++){
        if(freq[i]>max_length){
            max_length=freq[i];
            name=i;
        
        }
    }
    printf(" %c is %d\n",name,max_length);
    return 0;
}