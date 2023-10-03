#include<stdio.h>
int main(){
    char str[100];

    printf("enter the strring");
    scanf("%s",str);

    int i=0;
    int vowel=0;
    int constant=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowel++;
        }
        else{
            constant++;
        }
        i++;
    }
    printf("total no of vowels are %d \n",vowel);
    printf("total no of constant are %d \n",constant);
    printf("total no of letters are : %d \n",i);
    return 0;
}