#include<stdio.h>

int main(){
	
	int num1,num2,max;
	
	//take user input
	
	printf("Enter First Number (num1) : \n");
	scanf("%d",&num1);
	printf("Enter Second Number (num2) : \n");
	scanf("%d",&num2);
	
	//ternary operator
	
	max = (num1 > num2 ? num1 : num2);
	printf("maximun number = %d \n", max) ;
	
	return 0;
}
