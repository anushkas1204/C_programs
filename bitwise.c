#include<stdio.h>

int main(){
	
	int a = 12, b=13;
	
	printf("a & b = %d \n",a&b); 
	printf("a | b = %d \n",a|b);
	printf("a ^ b = %d \n",a^b);  
	
	printf("-------------------------- \n");
	printf("a << 1 = %d \n",a<<1);  
	printf("a << 2 = %d \n",a<<2);  
	printf("a << 3 = %d \n",a<<3);  
	printf("b << 1 = %d \n",b<<1);  
	printf("b << 2 = %d \n",b<<2);  
	printf("b << 3 = %d \n",b<<3);  
	
	printf("-------------------------- \n");
	printf("a >> 1 = %d \n",a>>1);  
	printf("a >> 2 = %d \n",a>>2);  
	printf("a >> 3 = %d \n",a>>3);  
	printf("b >> 1 = %d \n",b>>1);  
	printf("b >> 2 = %d \n",b>>2);  
	printf("b >> 3 = %d \n",b>>3); 
	
	printf("-------------------------- \n");
	printf("~a = %d \n",~a); 
	printf("~b = %d \n",~b); 
	return 0;
}
