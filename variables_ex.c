#include<stdio.h>

int main(){
	
	//Interger Types
	int i = 10;
	short int si = 5;
	long int li = 12000777;
	unsigned int ui = 20;
	
	//Charater Type 
	char c = 'A';
	
	//Floating-Point Type
	float f = 3.14;
	double d = 3.14332332332;
	long double ld = 123.456789;
	
	printf("------------Interger Types--------------\n");
	printf("int : value = %d, size = %zu byte \n",i,sizeof(i));
	printf("short int : value = %d, size = %zu byte \n",si,sizeof(si));
	printf("long int : value = %ld, size = %zu byte \n",li,sizeof(li));
	printf("unsigned int : value = %u, size = %zu byte \n\n",ui,sizeof(ui));
	
	printf("------------Character Type--------------\n");
	printf("char : value = %c, size = %zu byte \n\n",c,sizeof(c));
	
	printf("------------Floating-Point Types--------------\n");
	printf("float : value = %f , size = %zu byte \n",f,sizeof(f));
	printf("double : value = %lf , size = %zu byte \n",d,sizeof(d));
	printf("long double : value = %Lf , size = %zu bytes\n", ld, sizeof(ld));
	return 0;
}

