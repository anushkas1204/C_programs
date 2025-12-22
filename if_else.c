#include<stdio.h>

int main(){
	
	int amount;
	
	printf("Enter your food order amount ");
	scanf("%d",&amount);
	
	if(amount>500)
	{
		printf("Congratulations You get Free Delivery \n ");
	}else{
		printf("Delivery Charges will apply...");
	}
	return 0;
}
