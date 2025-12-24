//Function With Parameter but No return

#include<stdio.h>
int i;
void printTable(int num){
	for(i=1; i<=10 ;i++){
		printf("%d x %d = %d \n",num,i, num * i);
	}
}
void areaReactangle(int length, int width){
	printf("Area of Reactangle = %d", length * width);
}
int main(){
	int number;
	printf("Enter Number : ");
	scanf("%d",&number);
	int l,w;
	
	printf("Multiplication table of %d : \n",number);
	printTable(number);
	
	printf("--------------------\n");
	printf("Enter length ");
	scanf("%d",&l);
	printf("Enter width ");
	scanf("%d",&w);
	areaReactangle(l,w);
	
	
	return 0;
}
