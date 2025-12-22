#include<stdio.h>

int main(){
	
	int balance, withdrawn;
	
	printf("Enter Your Balance : ");
	scanf("%d",&balance);
	
	printf("Enter The Amount You Want to Withdrawn : ");
	scanf("%d",&withdrawn);
	
	if(withdrawn <= balance){
		printf("Withdrawn Successful \n");
		printf("Your remaining balance : %d", balance - withdrawn);
	}else{
		printf("You have insuffient Balance");	
	}
	return 0;
}
