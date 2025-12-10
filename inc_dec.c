#include<stdio.h>

int main(){
	
	int num;
	
	//user input
	
	printf("Enter Number \n");
	scanf("%d", &num);
	
	//Unary Operator 
	printf("Pre Increment = %d \n", ++num);
	printf("Post Increment = %d \n", num++);
	printf("After Post Increment = %d \n", num);
	printf("------------------------------------- \n");
	printf("Pre Decrement = %d \n", --num);
	printf("Post Decrement = %d \n", num--);
	printf("After Post Decrement = %d \n", num);
	return 0;
}
