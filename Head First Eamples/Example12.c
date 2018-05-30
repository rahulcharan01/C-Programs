#include<stdio.h>
void goSouthEast(int *lat,int *lon){
    *lat=*lat-1;
    *lon=*lon+1;
}

int main(){
int latitude,longitude;
latitude=32;
longitude=10;
printf("Initial latitude is %d\n",latitude);
printf("Initial longitude is %d\n",longitude);
goSouthEast(&latitude,&longitude);
printf("Ship is moving\n");
printf("New latitude is %d\n",latitude);
printf("New longitude is %d",longitude);

}

