#include<stdio.h>
//#include<conio.h>

int palindrome(int x);
int reverse(int x);

int main(){
    int x;
    printf("enter the value of x:\n");
    scanf("%d",&x);

    if(palindrome(x)==1){

        printf("the number is  palindromic number");
    }
    else{
        printf("the number is not palindromic number");
    }

    return 0;
}

int palindrome(int x){

    if(x==reverse(x)){
        return 1;
    }
    return 0;
}
int reverse(int x){

   static int sum=0;
   // int f=x;
    int k;
    if(x!=0){

        k=x%10;
        sum=sum*10+k;
        reverse(x/10);
    }
    else{
        return sum;
    }
    //return sum;
}
