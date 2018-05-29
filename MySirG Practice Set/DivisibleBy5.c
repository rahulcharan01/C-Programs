#include<stdio.h>

int main(){
int num;
puts("Enter a number:");
scanf("%d",&num);
if(num%5==0){
    puts("Its divisible by 5.");
}
else{
    puts("Its not divisible by 5.");
}
return 0;
}
