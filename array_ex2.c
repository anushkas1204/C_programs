//array ex by taking the inputs from user
#include<stdio.h>

int main(){
	
	int i ;
	int marks[5];
	printf("Enter marks of 5 students : \n");
	for(i=0;i<5;i++){
		scanf("%d",&marks[i]);
	}
	
	printf("Student marks : \n");
	for(i=0;i<5;i++){
		printf("marks[%d] = %d \n",i,marks[i]);
	}
	return 0;
}
