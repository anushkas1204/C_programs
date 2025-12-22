#include<stdio.h>

int main(){
	
	int marks;
	
	printf("Enter Your Marks : ");
	scanf("%d",&marks);
	
	if(marks > 35 && marks <= 50){
		printf("C grade");
	}
	else if(marks > 50 && marks <= 70){
		printf("B grade");
	}
	else if(marks > 70 && marks <= 100){
		printf("A grade");
	}
	else{
		printf("You are fail");
	}
	return 0;
}

