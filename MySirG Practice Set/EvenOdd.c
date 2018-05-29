#include<stdio.h>

int main(){
int num;
puts("Please Enter A Number:");
scanf("%d",&num);
if(num%2==0){
    puts("It is an Even number");
}
else{
    puts("It is an Odd number");
}
return 0;
}
