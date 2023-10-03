 #include<stdio.h>
 int main(){
    int a,c,d;
    int x;
    printf("enter the number");
    scanf("%d",&a);
   // printf("enter the range");
   // scanf("%d",&x); 
    while(a>1){
        if(a%2==0){
           a=a/2;
        }
        else{
            a=(a*3)+1;
        }
        printf("%d   ",a);
    }
    return 0;

 }