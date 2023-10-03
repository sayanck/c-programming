#include<stdio.h>
float force(float mass, float g);


int main(){
    float mass;
    float g=9.8;
    printf("enter th value of mass\n");
    scanf("%f",&mass);
    printf("THE FORMULA TO FIND FORCE OF ATTRACTION IS ~ F=mg \n");
    printf("The force of attraction on body of ass exerted by earth is :: %f",force(mass,g));
    return 0;
}


float force(float mass, float g){
    float result;
    result=(mass*g);
    return result;
}