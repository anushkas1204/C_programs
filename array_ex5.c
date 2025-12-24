//count the odd and even nos from 1-8
//max value from array elements

#include<stdio.h>
int main(){
//	int i;
//	int array[8] = {1,2,3,4,5,6,7,8};
//	int even = 0, odd = 0;
//	
//	for(i=0;i<8;i++){
//		if(array[i] % 2 == 0)
//		{
//			even++;
//		}else{
//			odd++;
//		}
//	
//	}
//		printf("Even Count = %d , Odd Count = %d",even ,odd);

	int arr[5]= {34,10,67,21,12};
	int i;
	int max = arr[0];
	int min = arr[0];
	for(i=1;i<5;i++){
		
		if(arr[i]>max){
			max= arr[i];
		}
	
	}
		for(i=1;i<5;i++){
		
		if(arr[i]<min){
			min= arr[i];
		}
	
	}
		printf("Maximum number : %d \n",max);
		printf("Minimum number : %d",min);
	return 0;
}
