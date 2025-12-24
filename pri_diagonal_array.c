#include<stdio.h>
//primary diagonal
int main(){
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
//	printf("Primary diagonal \n");
//	for(i=0;i<3;i++){
//		printf("%d ",arr[i][i]);
//	} 

	printf("Secondary diagonal \n");
	for(i=0;i<3;i++){
	printf("%d ",arr[i][2-i]);		
	} 
	return 0;	
}
