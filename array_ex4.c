//copying data from 1 array to other

#include<stdio.h>
int main(){
	
	int arr1[5] = {5,10,20,30,35};
	int arr2[5];
	int i;
	
	for(i=0;i<5;i++){
		arr2[i] = arr1[i];
	}
	printf("Copies array : ");
	for(i=0;i<5;i++){
		printf(" %d",arr2[i]);
	}
	return 0;
}
