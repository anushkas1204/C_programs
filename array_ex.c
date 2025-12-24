#include<stdio.h>

int main(){
	
	int marks[5] = {50,60,70,80,90};
	int i;
	printf(" Array elements :");
	for(i=0; i<5 ;i++)
	{
		printf("\n %d",marks[i]);
	}
	
	marks[2] = 100;
	printf("\n Updated Array elements :");
	for(i=0; i<5 ;i++)
	{
		printf("\n %d",marks[i]);
	}
	
	marks[4] = 150;
	printf("\n Updated Array elements :");
	for(i=0; i<5 ;i++)
	{
		printf("\n %d",marks[i]);
	}
	return 0;
}
