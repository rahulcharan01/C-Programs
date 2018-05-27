/*
Simple programs describing if condition use.
*/
#include<stdio.h>
int main(){
int decks;
puts("Enter number of decks:");
scanf("%i",&decks);
if(decks<1){
    puts("Invalid no. of decks");
    return 1;
}
printf("you have %i cards.\n",(52*decks));
return 0;
}
