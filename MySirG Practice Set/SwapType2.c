#include<stdio.h>
#include<math.h>
int main(){
int num1,num2;
num1=num2=0;
printf("Input");
printf("\n-----------------------");
printf("\nEnter First number:");
scanf("%d",&num1);
printf("Enter Second number:");
scanf("%d",&num2);
printf("-----------------------");
printf("\noutput");
printf("\n-----------------------");
printf("\nBefore Swap:");
printf("\nNumber1:%d",num1);
printf("\nNumber2:%d",num2);

num1=num1+num2;
num2=num1-num2;
num1=num2-num1;
printf("\n\nAfter Swap:");
printf("\nNumber1:%d",abs(num1));
printf("\nNumber2:%d",abs(num2));
printf("\n-----------------------");
return 0;
}
