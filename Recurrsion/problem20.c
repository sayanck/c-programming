#include<stdio.h>
int main(){
    int a;
    int arr[1000];
    int rem;
    printf("enter the value:--");
    scanf("%d",&a);
    int i = 0;
    while(a!=0){
        rem=a%2;
        a=a/2;
        arr[i]=rem;
        i++;
    }
    printf("The binary digit of the given  nuumber is:\n");
    for(int j=i-1; j>=0; j--){
        printf("%d ",arr[j]);
    }
    return 0;




}