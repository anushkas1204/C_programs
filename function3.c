//function without parameter but with return value

#include<stdio.h>
#define PI 3.146
int getNumber(){
	
	return 10;
}

float areaCircle(){
	float radius = 7;
	return PI * radius * radius;
}
int main(){
	int x = getNumber();
	printf("Number = %d \n",x);
	
	printf("Area of Circle = %.2f \n",areaCircle());
	return 0;
}
