#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int freq=0;
    int l;
    int i;

    printf("enter the string");
    gets(str);

    l=strlen(str);

    for(int x=0;x<l;x++){
        i=(str[x]=='i'||str[x]=='I');

        if((i)==1){
            freq++;
        }
    }
    printf("frequency of i is %d",freq);
    return 0;
}