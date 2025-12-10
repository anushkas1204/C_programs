#include<stdio.h>

int main(){
		
	int num1,num2;
	
	//take user input
	
	printf("Enter First Number (num1) : \n");
	scanf("%d",&num1);
	printf("Enter Second Number (num2) : \n");
	scanf("%d",&num2);
	
	//logical Operators
	
	printf("(num1 > num2) && (num1 < 0) = %d \n" , (num1 > num2) && (num1 < 0) );
	printf("(num1 > num2) || (num1 < 0) = %d \n" , (num1 > num2) || (num1 < 0) );
	printf("!(num1 == num2) = %d \n", !(num1 == num2));
	return 0;
}
