#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,wrd;
    printf("enter the sentence");
    //scanf("%s",str);
     fgets(str, sizeof str, stdin);
    i = 0;
    wrd = 1;

    /* loop till end of string */
    while(str[i]!='\0')
    {
        /* check whether the current character is white space or new line or tab character*/
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            wrd++;
        }

        i++;
    }
    printf("there are %d words in the sentence and %d is the length",wrd-1,i-1);

    return 0;
}