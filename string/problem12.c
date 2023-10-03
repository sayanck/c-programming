//refer next//

#include <stdio.h>
int main()
{
    char str[10000];
    char search[10000];

    printf("Input the string : ");
    fgets(str, sizeof str, stdin);

    printf("Input the substring to be search : ");
    fgets(search, sizeof search, stdin);

    int i=0;
    int j=0;

    while(str[i]!='\0'&& search[j]!='\0'){
        if(str[i]!=search[j]){

            i++;
            j=0;
        }
        else{
            i++;
            j++;
        }
    }
    if(search[j]=='\0'){
        printf("the search exist");
    }
    else{
        printf("the search donot exist");
    }



    return 0;
}