#include<stdio.h>
int main(){
    int t1=0;
    int t2=1;
    int sum;
    printf("%d\n", t1);
    printf("%d\n", t2);
    for(int i=0;i<6;i++){
        sum=t1+t2;
          printf("%d\n", sum);
       t1=t2;
       t2=sum;
      
    }
    return 0;
}