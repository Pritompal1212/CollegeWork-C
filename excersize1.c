#include<stdio.h>
int main()
{
float a,b,peremiter,area;
printf("enter of the circle is ");
scanf("%f%f",&a,&b);
peremiter = 2*(a+b);
printf("peremiter of the rectringle=%f inches\n",peremiter);
area=a*b;
printf("area of the rectringle=%f inches\n",area);
return 0;
}