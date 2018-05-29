#include<stdio.h>

int main(){
int num1,num2;
num1=num2=0;
puts("Enter First Number:");
scanf("%d",&num1);
puts("Enter Second Number:");
scanf("%d",&num2);

if(num1>num2){
    printf("%d is greater than %d",num1,num2);
}
else if(num2>num1){
    printf("%d is greater than %d",num2,num1);
}
else{
    puts("Numbers are equal");
}
return 0;
}
