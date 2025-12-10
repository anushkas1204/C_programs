#include<stdio.h>

int main(){
	
	int num;
	
	//user input
	
	printf("Enter Number \n");
	scanf("%d", &num);
	///num = num + 5
	num += 5;
	printf("After num += %d \n",num);
	num -= 5;
	printf("After num -= %d \n",num);
	num %= 5;
	printf("After num %= %d \n",num);
	num *= 5;   
    printf("After num *= %d \n", num);
	num /= 5;   
    printf("After num \= %d \n", num);
	return 0;
}
