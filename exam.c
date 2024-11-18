#include<stdio.h>
#include<math.h>
int main(){
int n;
    float princple,rate,time,simpleintrest,compoundintrest;

    printf("enter the number for emni ");
    scanf("%f%f%f",&princple,&rate,&time);
      printf("enter the number for n");
    scanf("%d",&n);


   simpleintrest=(princple*(1+rate*time));
    printf("the simpleintrest is %f\n",simpleintrest);

    compoundintrest=(princple*pow((1+rate/n),n*time));
    printf("the compoundintrest is %f",compoundintrest);

    return 0;
}