#include<stdio.h>
int main(){
int x =10;
int addrX=&x;
int *valAddrX=addrX;

printf("Initial value of variable x is %d\n",x);
printf("Address of x is %p\n",addrX);
printf("value at Address of x is %d",*valAddrX);

}

