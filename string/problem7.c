#include<stdio.h>
#include<string.h>
#include<math.h>

//tryalpha(char[]);

int main(){

    int alpha=0;
    int num=0;
    int special=0;
    int c;
    char str[200];
    printf("enter the string\n");
    //scanf("%s",str);
    fgets(str, sizeof str, stdin);

    int i=0;

    while(str[i]!='\0'){
        if(str[i]>='a' && str[i]<='z'){
            alpha++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            num++;
        }
        else{
            special++;
        }
        i++;
    }
    printf("total no alphabate are: %d\n",alpha);
    printf("total no of nnumber are  %d\n",num);
    printf("total no of special character are %d\n",special);

    return 0;
}