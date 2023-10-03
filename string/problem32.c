#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char pr[50][50];

    printf("enter your str");
    gets(str);

    int row=0;
    int col=0;

    int l=strlen(str);

    for(int i=0;i<l;i++){

        if(str[i]==' ' || str[i]=='\0'){
            pr[col][row]='\0';
            col++;
            row=0;
        }
        else{
            pr[col][row]=str[i];
            row++;
        }
    }
    printf("the string is\n");
    for(int i=0;i<col;i++){
        printf("%s\n",pr[i]);
    }
    return 0;

}