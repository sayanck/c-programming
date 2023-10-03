#include<stdio.h>
#include<math.h>

int main(){
    int side;
    
    printf("Enter the side of your Square!! \n");
    scanf("%d", &side);

    printf("The area of the square is %f",pow(side,2));

    return 0;
}