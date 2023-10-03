#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    char result[200];
    printf("eenter str1");
    gets(str1);
    printf("enter str2");
    gets(str2);
     int i;
    int j;
    int k=0;
    int l = strlen(str1);
    int m = strlen(str2);

        //str1[strcspn(str1, "\n")] = 0;
   // str2[strcspn(str2, "\n")] = 0;
    for (int i = 0; i < l; i++)
    {
        result[k] = str1[i];
        k++;
    }
    for (int j = 0; j < m; j++,k++)
    {
        result[k] = str2[j];
       // i++;
    }
    result[k] = '\0';
    printf("%s", result);
    return 0;
}