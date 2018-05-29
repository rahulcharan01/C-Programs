#include<stdio.h>

int main(){
int num1,num2,temp;
num1=num2=temp=0;
puts("Enter first number:");
scanf("%d",&num1);
puts("Enter second number:");
scanf("%d",&num2);
puts("Before Swap:");
printf("---------------------------");
printf("\nNumber1=%d",num1);
printf("\nNumber2=%d",num2);
printf("\n---------------------------");
temp=num1;
num1=num2;
num2=temp;
puts("\n\nAfter Swap:");
printf("---------------------------");
printf("\nNumber1=%d",num1);
printf("\nNumber2=%d",num2);
printf("\n---------------------------");
return 0;
}
