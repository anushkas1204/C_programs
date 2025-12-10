#include<stdio.h>

int main(){
	
	int age;
	float marks;
	char grade;
	char name[20];
	
	//Taking User Inputs
	printf("Enter your age ");
	scanf("%d", &age);
	printf("Enter your Marks ");
	scanf("%f", &marks);
	printf("Enter your Grade ");
	scanf(" %c", &grade); //Space before %c
	printf("Enter your Name ");
	scanf("%s",name);
	
	//display output
	printf("----------Student Details----------\n");
	printf("Age is : %d \n",age);
	printf("Marks : %.2f \n",marks);
	printf("Grade : %c \n",grade);
	printf("Name : %s \n",name);
	
	return 0;
}
