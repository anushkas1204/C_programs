#include<stdio.h>

int main(){
	
	int num;
	
	//user inputs
	printf("Enter Number \n");
	scanf("%d", &num);

	//assignment operator
	num += 5;
	printf("After num += %d \n",num);

	num -= 5;
	printf("After num -= %d \n",num);

	num %= 5;
	printf("After num %%= %d \n",num); // Note: %% prints %

	num *= 5;   
    printf("After num *= %d \n", num);

	num /= 5;   
    printf("After num /= %d \n", num);

	return 0;
}

