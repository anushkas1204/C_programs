//sum of array elements

#include<stdio.h>

int main(){
	int i;
	int array[5] = {5,10,20,30,35};
//	int sum =0;
	int length= sizeof(array) / sizeof(array[0]);
//	
//	for(i=0;i<length;i++){
//		sum += array[i];
//	}
//	printf("Sum is : %d",sum);

	printf("Array in reverse order : \n");
	for(i=length-1;i>=0;i--){
			printf(" %d",array[i]);
	}
	return 0;
}
