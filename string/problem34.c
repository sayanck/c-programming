#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char max_str[100];
    int len = 0;
    int max_len = 0;
    int index;
    int i;

    printf("enter the str");
    gets(str);

    int l = strlen(str);

    for (i = 0; i < l; i++)
    {

        if (str[i] != ' ')
        {
            len++;
            continue;
        }
        if (len > max_len)
        {
            max_len = len;
            index = (i - max_len);
        }
        len = 0;
    }
    for (i = 0; i < max_len; i++)
    {
        max_str[i] = str[index + i];
    }
    max_str[i]='\0';
    
    int j=0;
    int count =0;
    while(max_str[j]!='\0'){
        count++;
        j++;

    }
    printf("%s is of %d", max_str,count);
    return 0;
}