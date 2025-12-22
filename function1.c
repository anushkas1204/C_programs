#include<stdio.h>
//No parameter no return --function
// function without parameter and without return

void msg(){
	printf("\n Hello, Welcome to c Programing \n");
}
void printstar(){
	printf("\n*********************\n");
}
void todayMenu(){
	printf("1.Pizza");
	printf("2.Burger");
	printf("3.Sandwich");
}
void tomoMenu(){
	printf("1.Modak");
	printf("2.Fish");
	printf("3.Dosa");
}
int main(){
	printstar();
	tomoMenu();	
	return 0;	
}
