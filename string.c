#include<stdio.h>

int main(){
	
//	char name[20];
//	printf("Enter your name ");
//	scanf("%s",name);
//	
//	printf("Your name is = %s",name);

	char fullname[20];
	printf("Enter your fullname ");
	fgets(fullname,sizeof(fullname),stdin);
	
	printf("Your fullname is = %s",fullname);
	return 0;
}
