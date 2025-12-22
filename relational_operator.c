#include<stdio.h>

int main(){
	
	int num1,num2;
	
	//take user input
	
	printf("Enter First Number (num1) : \n");
	scanf("%d",&num1);
	printf("Enter Second Number (num2) : \n");
	scanf("%d",&num2);
	
	//relational operators
	
	printf("num1 == num2 = %d \n", num1==num2);
	printf("num1 != num2 = %d \n", num1 != num2);
	printf("num1 > num2 = %d \n", num1 > num2);
	printf("num1 < num2 = %d \n", num1 < num2);
	printf("num1 >= num2 = %d \n", num1 >= num2);
	printf("num1 <= num2 = %d \n", num1 <= num2);
}
