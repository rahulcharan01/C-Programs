#include<stdio.h>
int main(){
const float pi = 3.14;
float rad,area;
rad=area=0;
puts("Please enter the radius of circle:");
scanf("%f",&rad);
area=(pi*rad*rad);
printf("The area of circle is : %f",area);
return 0;
}
