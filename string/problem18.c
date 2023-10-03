#include<stdio.h>
#include<string.h>

int main(){
    
    char str[100];
    char highlength[100];
    char lowlength[100];
    int i;

    printf("enter the string\n");
    gets(str);

    int l=strlen(str);
    int length=0;
    int max_length=0;
    int index=0;
    int min_length=0;

    for(i=0;i<=l;i++){
        if(str[i]!=' ' && str[i]!='\0'){
            length++;
            continue;
        }
        if(length>max_length){
            max_length=length;
            index=(i-max_length);
        }
       
        length=0;
    }
    

    
    for(i=0;i<max_length;i++){
        highlength[i]=str[index+i];

    }
    highlength[i]='\0';
   // lowlength[i]='\0';

    printf("%s\n",highlength);
   // printf("%s",lowlength);
    return 0;
}