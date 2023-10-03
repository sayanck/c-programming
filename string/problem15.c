#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    printf("enter the string \n");
    gets(str);

    int a;
    a=strlen(str);

    int t;
    int h;
    int e;
    int space;
    int freq=0;
    int true=1;


    for(int i=0;i<a-1;i++){

        t=(str[i]=='t'||str[i]=='T');
        h=(str[i+1]=='h'||str[i+1]=='H');
        e=(str[i+2]=='e'||str[i+2]=='E');
        space=(str[i+3]==' '||str[i+3]=='\0');

        if((t&&h&&e&&space)==1){
            freq++;
        }

    }
    printf("freq of the is::: %d",freq);
    return 0;
}