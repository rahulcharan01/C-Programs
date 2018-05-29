#include<stdio.h>
int main(){
int num1,num2,sum;
num1=num2=sum=0;
puts("Enter First Number:");
scanf("%i",&num1);
puts("Enter Second Number:");
scanf("%i",&num2);
sum=num1+num2;
printf("The sum of %i and %i is %i",num1,num2,sum);
return 0;
}
