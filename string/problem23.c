#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char alpha;

    printf("enter the character");
    scanf("%c",&alpha);

    if(isupper(alpha)){
        printf("character is capital");
    }
    else{
        printf("charcater is small");
    }
    return 0;
}